#ifndef Person_hpp
#define Person_hpp
#include <iostream>

namespace Account {

    struct User
    {
        int uid;
        std::string email;
        std::string password;
        
        void printUser();
        
    };
}

#endif
