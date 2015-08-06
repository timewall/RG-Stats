/*
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#  
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#  
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
*/

#include <iostream>
#include <sstream>
#include <fstream>
#include <ctime>
#include <unistd.h>

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Exception.hpp>

#include <cxxtools/arg.h>
#include <cxxtools/md5stream.h>

#include <cxxtools/jsondeserializer.h>
#include <cxxtools/serializationinfo.h>

#include <tntdb/connection.h>
#include <tntdb/connect.h>
#include <tntdb/statement.h>
#include <tntdb/result.h>
#include <tntdb/row.h>
#include <tntdb/value.h>

#include "../rg_const.h"
#include "../rg_config.h"
#include "../sec_config.h"


struct RG_struct {
    int ITEM_ID;
    long int NORMKURS;
    long int SMKURS;
};


void operator<<= (cxxtools::SerializationInfo& si, const RG_struct& rg_struct){
    
    si.addMember("ITEM_ID") <<= rg_struct.ITEM_ID;
    si.addMember("NORMKURS") <<= rg_struct.NORMKURS;
    si.addMember("SMKURS") <<= rg_struct.SMKURS;
}

void operator>>= (const cxxtools::SerializationInfo& si, RG_struct& rg_struct){
    
    si.getMember("ITEM_ID") >>= rg_struct.ITEM_ID;
    si.getMember("NORMKURS") >>= rg_struct.NORMKURS;
    si.getMember("SMKURS") >>= rg_struct.SMKURS;
}

std::string g_time(){

    time_t rawtime;
    struct tm * timeinfo;
    char buffer[80];

    time (&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer,80,"%I:%M:%S",timeinfo);
    std::string str(buffer);

    return str;
}

std::string get_md5(std::string buf){

    cxxtools::Md5stream hash;
    hash << buf;
    return hash.getHexDigest();

}


int main(int argc, char* argv[]){
  
      
    cxxtools::Arg<bool> verbose(argc, argv, "--verbose");
    cxxtools::Arg<bool> help(argc, argv, "--help");
    
    if (verbose){ std::cout << g_time() << " : " << "Start Service" << std::endl; } 
    if (verbose){ std::cout << g_time() << " : " << "Resources Game: [Constant Data] Version " << RG_CONST_VERSION << std::endl; }
    
    curlpp::Cleanup cleaner;
	curlpp::Easy request;
	if (verbose){ std::cout << g_time() << " : " << "Initial curlpp Constructs" << std::endl; }
    
    
    std::string diff_hash = "Initial New ;)";
    std::stringstream buffer;
    
    if (help){
        
        std::cout << "--verbose for Debug output" << std::endl;
        exit(0);
    }
    
    
    try{
        
       	while(1){


            buffer.str( std::string() );
            if (verbose){ std::cout << g_time() << " : " << "Clear Buffer!" << std::endl; }
			
			request.setOpt(new curlpp::options::Url(RG_DATA_JSON));
			buffer << request;
			if (verbose){ std::cout << g_time() << " : " << "Get JSON data from Resources Game Server" << std::endl; }
			
			
            if (verbose){ std::cout << g_time() << " : " << "Diff Hash : " << diff_hash << std::endl; }
            if (verbose){ std::cout << g_time() << " : " << "Now  Hash : " << get_md5(buffer.str()) << std::endl; }

			if (diff_hash != get_md5(buffer.str())){
			    
                tntdb::Connection conn = tntdb::connect(PG_CONF_STRING);
                if (verbose){ std::cout << g_time() << " : " << "Connect to Database" << std::endl; }
            
                tntdb::Statement st = conn.prepare("INSERT INTO mp_all(itemid, mprice, bmprice, idate) VALUES (:v1, :v2, :v3, current_date)");
                if (verbose){ std::cout << g_time() << " : " << "Prepare SQL Statment" << std::endl; }
			
			    std::vector<RG_struct> vrg_struct;
		        // read json mystruct struct from stdin:
			    cxxtools::JsonDeserializer deserializer(buffer);
			    deserializer.deserialize(vrg_struct);
			    if (verbose){ std::cout << g_time() << " : " << "Deserialize JSON data" << std::endl; }

                if (vrg_struct.size() != ITEM_COUNT){
                    if (verbose){ std::cout << g_time() << " : " << "Wrong Item Count " << vrg_struct.size() << " of " << ITEM_COUNT << std::endl; }
                    if (verbose){ std::cout << g_time() << " : " << "Please Update Resources Game Stats in the Next Time!" << std::endl; }
                }
                
			    for (unsigned n = 0; n < vrg_struct.size(); ++n){
			    
				    st.set("v1", vrg_struct[n].ITEM_ID)
				      .set("v2", vrg_struct[n].NORMKURS)
				      .set("v3", vrg_struct[n].SMKURS)
				      .execute();
				  
				    if (verbose){ std::cout << g_time() << " : " << "Insert data : " << n+1 << " of " << vrg_struct.size() << std::endl; }

			    }
			    if (verbose){ 
			        
			        std::string data;
			        std::cout << g_time() << " : " << "---------------------------------" << std::endl;
                    conn.selectValue("SELECT COUNT(*) FROM mp_all").get(data);  
                    std::cout << g_time() << " : " << "Number of Entries : " << data << std::endl;
                    
                    conn.selectValue("SELECT pg_size_pretty(pg_relation_size('mp_all'))").get(data);
                    std::cout << g_time() << " : " << "Table Size        : " << data << std::endl;
                    std::cout << g_time() << " : " << "---------------------------------" << std::endl;
    
			    }
			    
			    diff_hash = get_md5(buffer.str());
			   
			}
			else{
			    if (verbose){ std::cout << g_time() << " : " << "Request Hash is same! " << std::endl; }
			}
            
            if (verbose){ std::cout << g_time() << " : " << "Sleep for " << ST_SE_SLEEP << " Seconds!" << std::endl; }
            sleep(ST_SE_SLEEP);
		}
		
    }
    catch (const std::exception& e){
        
        std::cerr << e.what() << std::endl;
    }
    
}