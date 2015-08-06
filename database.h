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

/*
SELECT COUNT(*) FROM mp_all;
SELECT pg_size_pretty(pg_relation_size('mp_all'));
SELECT pg_size_pretty(pg_database_size('rg-stats'));

set serial pk back to zero
TRUNCATE mp_all RESTART IDENTITY CASCADE
*/

#include <tntdb/connect.h>
#include <tntdb/statement.h>
#include <tntdb/result.h>
#include <tntdb/row.h>
#include <tntdb/value.h>


//test: test/database_main.cpp

class database {
    
    private:
        
        tntdb::Connection conn;
        
        std::string v_replace(std::string &s, std::string toReplace, std::string replaceWith);
        
    public:
    
        database(std::string pg_db_data);
        //~database();
    
        tntdb::Connection get_conn();
        
        int replace_all_db_entrys(std::string ntable);
        
        std::string get_rows(std::string ntable);
        std::string get_table_size(std::string ntable);
        std::string get_db_size();
        
        std::string get_db_info();
    
    protected:
    
};