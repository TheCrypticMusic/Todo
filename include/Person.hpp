#ifndef Person_hpp
#define Person_hpp
#include <iostream>

namespace Account {

    struct User
    {
        std::string name;
        std::string username;
        std::string email;
        std::string password;
        int age;
        
        void printUser();
        
    };
}

#endif
