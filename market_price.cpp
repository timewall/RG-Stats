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

#include "thirdparty/infint/InfInt.h"
#include "market_price.h"


InfInt market_price::get_sql_data(){
    
}

std::string market_price::get_item_name(){
    
}
        
std::vector<std::string> market_price::get_db_info(){
    
}
        
market_price::market_price( int itemID ){
    conn = tntdb::connect(PG_CONF_STRING);
}
market_price::~market_price(){
    
}
/*
// get data function Market Price
InfInt market_price::get_mprice(){
    
}
InfInt market_price::get_average_mprice(){
    
}
InfInt market_price::get_max_mprice(){
    
}
InfInt market_price::get_min_mprice(){
    
}
//std::vector<InfInt> market_price::get_all_mprice(){
//    
//}
        
// get data function Black Market Price
InfInt market_price::get_bmprice(){
    
}
InfInt market_price::get_average_bmprice(){
    
}
InfInt market_price::get_max_bmprice(){
    
}
InfInt market_price::get_min_bmprice(){
    
}
//std::vector<InfInt> market_price::get_all_bmprice(){
//    
//}
*/
