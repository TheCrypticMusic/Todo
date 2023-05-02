#include "Login.hpp"
#include "Person.hpp"
#include "File.hpp"
#include <fstream>
#include <iostream>
#include <filesystem>

bool Account::Login::accountDetails(std::string email, std::string password)
{
    // TODO
    return false;
};

bool Account::Login::checkUserExists(std::string userProvidedEmail, std::string userProvidedPassword)
{
    Data::File myFile;

    bool userExists;

    if (myFile.isFile())
    {
        myFile.readFile();
        userExists = checkEmail(userProvidedEmail, myFile);
        if (userExists)
        {
            checkPassword(userProvidedEmail, userProvidedPassword, myFile);
        }
    }
    return true;
}

bool Account::Login::checkEmail(std::string userProvidedEmail, Data::File& file)
{
    bool emailFound;
    emailFound = file.findUserEmail(userProvidedEmail);
    if (emailFound) 
    {
        return true;
    }
    return false;
}

bool Account::Login::checkPassword(std::string userProvidedEmail, std::string userProvidedPassword, Data::File& file)
{
    bool correctPasswordForUser;
    correctPasswordForUser = file.checkUserPassword(userProvidedEmail, userProvidedPassword);
}

Account::Login::Login(std::string userProvidedEmail, std::string userProvidedPassword)
{
    bool correctDetails;

    correctDetails = Account::Login::checkUserExists(userProvidedEmail, userProvidedPassword);

}