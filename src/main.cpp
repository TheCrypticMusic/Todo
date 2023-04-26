#include <iostream>
#include "Person.hpp"
#include "Todo.hpp"
#include "Login.hpp"
#include "File.hpp"
#include <filesystem>

int main(int argc, const char *argv[])
{
    
    Data::File userAccountsFile;
    userAccountsFile.pathToFile = "account.txt";

    if (userAccountsFile.isFile("account.txt"))
    {
        userAccountsFile.openFile("account.txt");
        return 0;
    }
    else
    {
        std::cout << "file not found..." << std::endl;
    }
    return 0;
}
