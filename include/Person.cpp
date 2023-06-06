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
    todo.printActiveTodos(uid);
    // todo.addNewTodo(uid, "Task 5", "testtest", "test date");
}

// DATE TYPE TO CHANGE. JUST TESTING WITH STD::STRING ATM 
void Account::User::addNewTodo(std::string nameOfTask, std::string content, std::string date)
{
    Data::Todo todo;
    todo.addNewTodo(uid, nameOfTask, content, date);

}