#include "Person.hpp"
#include "Todo.hpp"
#include <iostream>

void Account::User::printUser() 
{
    std::cout << uid << " " << email;
}

void Account::User::printUserTodos()
{
    Data::Todo::printTodo(uid);
}