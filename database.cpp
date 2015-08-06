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

//test: test/database_main.cpp



#include "database.h"

std::string database::v_replace(std::string &s, std::string toReplace, std::string replaceWith) {
    return(s.replace(s.find(toReplace), toReplace.length(), replaceWith));
}

database::database(std::string pg_db_data){
    
     conn = tntdb::connect(pg_db_data);
}
   
    
tntdb::Connection database::get_conn(){
    
    return conn;
}
        
std::string database::get_rows(std::string ntable){
    
    std::string data;
    conn.selectValue("SELECT COUNT(*) FROM " + ntable).get(data);  
    return data;
}

std::string database::get_table_size(std::string ntable){
    
    std::string data;
    conn.selectValue("SELECT pg_size_pretty(pg_relation_size('" + ntable + "'))").get(data);  
    return data;
}

std::string database::get_db_size(){
    
    std::string data;
    conn.selectValue("SELECT pg_size_pretty(pg_database_size('rg-stats'))").get(data);  
    
    return data;
}

std::string database::get_db_info(){

    std::string db_info =   "+---------------------------------------- \n"
                            "| Table: mp_all \n"
                            "+---------------------------------------- \n"
                            "| Number of Entries   : =v1 \n"
                            "| Table Size          : =v2 \n"
                            "+---------------------------------------- \n"
                            "+---------------------------------------- \n"
                            "| Table: mp_item_name \n"
                            "+---------------------------------------- \n"
                            "| Number of Entries   : =v3 \n"
                            "| Table Size          : =v4 \n"
                            "+---------------------------------------- \n"
                            "+---------------------------------------- \n"
                            "| Database Size       : =v5 \n"
                            "+----------------------------------------"; 
                        
                        
    db_info = v_replace(db_info, "=v1", get_rows("mp_all"));
    db_info = v_replace(db_info, "=v2", get_table_size("mp_all"));
    db_info = v_replace(db_info, "=v3", get_rows("mp_item_name"));
    db_info = v_replace(db_info, "=v4", get_table_size("mp_item_name"));
    db_info = v_replace(db_info, "=v5", get_db_size());
    
    return db_info;
}