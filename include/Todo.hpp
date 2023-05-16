#ifndef Todo_hpp
#define Todo_hpp
#include <iostream>
#include "Person.hpp"

namespace Data {
    struct Todo
        {
        Account::User user;
        std::string task;
        std::string date;
        void printTodos(int uid);
        };
}

#endif /* Todo_hpp */
