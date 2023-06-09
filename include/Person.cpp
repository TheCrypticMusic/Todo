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
    std::cout << uid << std::endl;
    todo.printActiveTodos(uid);
    // todo.addNewTodo(uid, "Task 5", "testtest", "test date");
}

// DATE TYPE TO CHANGE. JUST TESTING WITH STD::STRING ATM 
void Account::User::addNewTodo()
{
    Data::Todo todo;

    std::string nameOfTask;
    std::string content;
    std::string date;

    std::cout << "Enter the name of new task: " << std::endl;

    std::cin >> nameOfTask;

    std::cout << "Enter the content of the task: " << std::endl;
    std::cin >> content;

    std::cout << "Enter date: " << std::endl;
    std::cin >> date;

    todo.addNewTodo(uid, nameOfTask, content, date);
}