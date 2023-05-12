#include <iostream>
#include "Person.hpp"
#include "Todo.hpp"
#include "Login.hpp"
#include "File.hpp"
#include <filesystem>
#include <fstream>


int main(int argc, const char *argv[])
{


    Data::File userAccountsFile;


    Account::Login login("gibsonlp@live.co.uk", "gibson");
    Account::User user = login.getUser();
    std::cout << user.uid << " " << user.email << std::endl;

    return 0;
}
