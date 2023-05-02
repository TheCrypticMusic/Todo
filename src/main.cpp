#include <iostream>
#include "Person.hpp"
#include "Todo.hpp"
#include "Login.hpp"
#include "File.hpp"
#include <filesystem>

int main(int argc, const char *argv[])
{
    
    Data::File userAccountsFile;
    Account::User user;

    bool userExists, validPassword;

    Account::Login("gibsonlp@live.co.uk", "test123");

    return 0;
}
