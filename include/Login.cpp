#include "Login.hpp"
#include "Person.hpp"
#include "File.hpp"
#include <fstream>
#include <iostream>
#include <filesystem>

struct Account::User Account::Login::accountDetails(std::string email, std::string username, int UID)
{
    user.email = email;
    user.username = username;
    user.uid = UID;
    return user;
};

void Account::Login::login(Account::User &user)
{
    user.loggedIn = true;
    std::cout << "User Logged In" << std::endl;

}

struct Account::User Account::Login::getUser()
{
    return user;
};

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
                int UID = myFile.userUID(userProvidedEmail, userProvidedPassword);
                std::string username = myFile.userUsername(userProvidedEmail, userProvidedPassword);
                Account::User user = accountDetails(userProvidedEmail, username, UID);
                login(user);
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

    Account::Login::checkUserExists(userProvidedEmail, userProvidedPassword);


}