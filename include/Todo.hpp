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
        void printActiveTodos(int uid);
        void addNewTodo(int uid, std::string name, std::string content, std::string finishData);
        };
}

#endif /* Todo_hpp */
