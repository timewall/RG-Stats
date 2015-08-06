#include <iostream>

std::string myreplace(std::string &s, std::string toReplace, std::string replaceWith) {
    return(s.replace(s.find(toReplace), toReplace.length(), replaceWith));
}

int main(){
    
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
    
    std::cout << db_info << std::endl;
    
    
    db_info = myreplace(db_info, "=v1", "324234");
    db_info = myreplace(db_info, "=v2", "3242sdf34");
    db_info = myreplace(db_info, "=v3", "3242erwer34");
    db_info = myreplace(db_info, "=v4", "3242w34");
    db_info = myreplace(db_info, "=v5", "3242ghk34");
    
     std::cout << db_info << std::endl;
}