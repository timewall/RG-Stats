#ifndef UPDATE_MARKET_H
#define UPDATE_MARKET_H

#include "rg_config.h"

#include <sstream>
#include <cstdlib>

#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Exception.hpp>


// Table Struktur
// ID INTEGER PRIMARY KEY  AUTOINCREMENT
// itemID INTEGER
// itemDE VARCHAR
// itemEN VARCHAR
// marketprice INTEGER
// bmprice INTEGER
//  date DATETIME


// use curllib (curl++) to load data file from resources page
// https://github.com/jpbarrette/curlpp.git

class update_market {
    
    private:
        int del_db();
        int insert_data();
        int read_data();
    public:
        int get_rg_data();
    
    protected:
    
};

#endif // UPDATE_MARKET_H