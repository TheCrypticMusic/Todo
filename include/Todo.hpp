#ifndef Todo_hpp
#define Todo_hpp
#include <iostream>
#include "Person.hpp"
#include <nlohmann/json.hpp>
using json = nlohmann::json;

namespace Data {
    struct Todo
        {
        Account::User user;
        std::string task;
        std::string date;
        void printActiveTodos(int uid);
        void addNewTodo(int uid, std::string name, std::string content, std::string finishData);
        bool doesExist(int uid, std::string name, json &data);
        };
}

#endif /* Todo_hpp */
