#ifndef MARKET_PRICE_H
#define MARKET_PRICE_H

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

#include <tntdb/connection.h>
#include <tntdb/connect.h>
#include <tntdb/result.h>
#include <tntdb/row.h>
#include <tntdb/value.h>



class market_price {
    
    private:
    
        bool validate_itemid( int itemID );
    
    public:
    
        int get_mprice( int itemID );
        int get_bmprice( int itemID );
        int get_max_mprice( int itemID );
        int get_min_bmprice( int itemID );
        int get_average_mprice( int itemID);
        std::string get_item_name( int itemID );
    
    protected:
    
};

#endif // MARKET_PRICE_H