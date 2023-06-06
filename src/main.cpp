#include <iostream>
#include "Person.hpp"
#include "Todo.hpp"
#include "Login.hpp"
#include "File.hpp"
#include <filesystem>
#include <fstream>


int main(int argc, const char *argv[])
{
    // std::string email;
    // std::string password;

    // std::cout << "Enter email address: ";
    // std::cin >> email;

    // std::cout << "Enter password: ";
    // std::cin >> password;

    // Account::Login login(email, password); 

    Account::Login login("gibsonlp@live.co.uk", "gibson");
    Account::User user = login.getUser();

    // user.printUserTodos();
    // user.addNewTodo()


    // user.printUser();

    return 0;
}
