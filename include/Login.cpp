#include "Login.hpp"
#include "Person.hpp"
#include "File.hpp"
#include <fstream>
#include <iostream>
#include <filesystem>

bool Account::Login::accountDetails(std::string email, std::string username, int age)
{

    return false;
};

void login()
{

}


bool Account::Login::checkUserExists(std::string userProvidedEmail, std::string userProvidedPassword)
{
    Data::File myFile;

    bool userExists;
    bool correctPassword;

    if (myFile.isFile())
    {
        userExists = checkEmail(userProvidedEmail);
        if (userExists)
        {
            correctPassword = checkPassword(userProvidedEmail, userProvidedPassword);
            if (correctPassword)
            {
                std::cout << "All details correct.";
            }
        }
    }
    return true;
}

bool Account::Login::checkEmail(std::string userProvidedEmail)
{
    Data::File myFile;
    myFile.loadVectorFile();
    bool emailFound;
    emailFound = myFile.findUserEmail(userProvidedEmail);
    if (emailFound) 
    {
        return true;
    }
    return false;
}

bool Account::Login::checkPassword(std::string userProvidedEmail, std::string userProvidedPassword)
{
    Data::File myFile;
    myFile.loadVectorFile();
   
    bool correctPasswordForUser;
   
    correctPasswordForUser = myFile.checkUserPassword(userProvidedPassword, userProvidedEmail);
    if (correctPasswordForUser)
    {
        return true; 
    }
    return false;
}

Account::Login::Login(std::string userProvidedEmail, std::string userProvidedPassword)
{
    bool correctDetails;

    correctDetails = Account::Login::checkUserExists(userProvidedEmail, userProvidedPassword);

}