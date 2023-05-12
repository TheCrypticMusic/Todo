#include <iostream>
#include "Person.hpp"
#include "Todo.hpp"
#include "Login.hpp"
#include "File.hpp"
#include <filesystem>
#include <json.hpp>
#include <fstream>
using json = nlohmann::json;

int main(int argc, const char *argv[])
{
    // std::ifstream f("to_do.json");
    // json data = json::parse(f);
    // // std::cout << data["todo"]["user_ids"];
    // json users = data["todo"]["user_ids"];


    Data::File userAccountsFile;
    Account::User user;

    Account::Login useruser("gibsonlp@live.co.uk", "gibson");

    

    return 0;
}
