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



#include "../rg_config.h"
#include "../sec_config.h"

std::string g_time(){

    time_t rawtime;
    struct tm * timeinfo;
    char buffer[80];

    time (&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer,80,"%d-%m-%Y %I:%M:%S",timeinfo);
    std::string str(buffer);

    return str;
}



std::string get_md5(std::stringstream& buf){

    cxxtools::Md5stream hash;
    hash << buf;
    return hash.getHexDigest();

}


int main(int argc, char* argv[]){
  
  std::string diff_hash = "new";
    try{
        
       	while(1){

			curlpp::Cleanup cleaner;
			curlpp::Easy request;
			
			request.setOpt(new curlpp::options::Url(RG_DATA_JSON));
		
			std::stringstream buffer;
				
			buffer << request;
			std::cout << get_md5(buffer) << std::endl;
			
			if (diff_hash != get_md5(buffer)){
			    
			    std::cout << "eintrag" << std::endl;
			    diff_hash = get_md5(buffer);
			}
			else{
			    std::cout << "same" << std::endl;
			}
           sleep(60);
		}
		
    }
    catch (const std::exception& e){
        
        std::cerr << e.what() << std::endl;
    }
    
}