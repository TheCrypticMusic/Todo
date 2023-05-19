#include "Person.hpp"
#include "Todo.hpp"
#include <iostream>

void Account::User::printUser() 
{
    std::cout << uid << " " << email;
}

void Account::User::printUserTodos()
{
    Data::Todo todo;
    // todo.printActiveTodos(uid);
    todo.addNewTodo(uid, "Task 5", "testtest", "test date");
}