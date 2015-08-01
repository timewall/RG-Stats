#include "update_market.h"

// Table Struktur
// ID INTEGER PRIMARY KEY  AUTOINCREMENT
// itemID INTEGER
// itemDE VARCHAR
// itemEN VARCHAR
// marketprice INTEGER
// bmprice INTEGER
//  date DATETIME

int update_market::read_data( char url){
    
     char *url = argv[1];
  
  try {
    curlpp::Cleanup cleaner;
    curlpp::Easy request;

    // Setting the URL to retrive.
    request.setOpt(new curlpp::options::Url(url));

    std::cout << request << std::endl;

  }
  catch ( curlpp::LogicError & e ) {
    std::cout << e.what() << std::endl;
  }
  catch ( curlpp::RuntimeError & e ) {
    std::cout << e.what() << std::endl;
  }
}