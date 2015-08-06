#include <iostream>



#include "../database.h"
#include "../sec_config.h"

int main() {
    
    try{
        database test(PG_CONF_STRING);
    
        std::cout << test.get_db_size() << std::endl;
    
        std::cout << test.get_table_size("mp_all") << std::endl;
        std::cout << test.get_table_size("mp_item_name") << std::endl;
    
        std::cout << test.get_db_info() << std::endl;
    
        return 0;
    
    }
    catch (const std::exception& e){
        
        std::cerr << e.what() << std::endl;
    }
}