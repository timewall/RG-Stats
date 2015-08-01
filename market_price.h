#ifndef MARKET_PRICE_H
#define MARKET_PRICE_H

#include <tntdb/connection.h>
#include <tntdb/connect.h>
#include <tntdb/result.h>
#include <tntdb/row.h>
#include <tntdb/value.h>

// Table Struktur
// ID INTEGER PRIMARY KEY  AUTOINCREMENT
// itemID INTEGER
// itemDE VARCHAR
// itemEN VARCHAR
// marketprice INTEGER
// bmprice INTEGER
//  date DATETIME

class market_price {
    
    private:
    
    public:
    
        int get_mprice( int itemID );
        int get_bmprice( int itemID );
    
    protected:
    
};

#endif // MARKET_PRICE_H