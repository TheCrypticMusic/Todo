#ifndef Person_hpp
#define Person_hpp
#include <iostream>

namespace Account {

    struct User
    {
        int uid;
        std::string email;
        std::string username;
        bool loggedIn;

        void printUser();
        void printUserTodos();
        void addNewTodo(std::string nameOfTask, std::string content, std::string date);
        };
}

#endif
