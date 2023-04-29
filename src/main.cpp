#include <iostream>
#include "Person.hpp"
#include "Todo.hpp"
#include "Login.hpp"
#include "File.hpp"
#include "Validation.hpp"
#include <filesystem>

int main(int argc, const char *argv[])
{
    
    Data::File userAccountsFile;
    Account::User user;
    Account::Validation validator;


    userAccountsFile.pathToFile = "account.txt";

    if (userAccountsFile.isFile("account.txt"))
    {
        userAccountsFile.readFile("account.txt", validator);
        return 0;
    }
    else
    {
        std::cout << "file not found..." << std::endl;
    }
    return 0;
}
