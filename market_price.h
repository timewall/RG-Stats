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


#include "rg_const.h"
#include "rg_config.h"
#include "sec_config.h"


class market_price {
    
    private:
        
        tntdb::Connection conn;
        int itemid;

    
    public:
    
        market_price( std::string db_conn, int itemID );
        ~market_price();
        // get data function Market Price
        long int get_mprice();
        long int get_average_mprice();
        long int get_max_mprice();
        long int get_min_mprice();
        //std::vector<InfInt> get_all_mprice();
        
        // get data function Black Market Price
        long int get_bmprice();
        long int get_average_bmprice();
        long int get_max_bmprice();
        long int get_min_bmprice();
        //std::vector<InfInt> get_all_bmprice();
        
        std::string get_item_name();

    
    protected:
    
};

#endif // MARKET_PRICE_H