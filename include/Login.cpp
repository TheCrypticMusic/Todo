#include "Login.hpp"
#include "Person.hpp"
#include "File.hpp"
#include <fstream>
#include <iostream>

bool Account::Login::accountDetails(std::string email, std::string password)
{

    // if (Account::Login::checkEmail(email))
    // {
    //     if (Account::Login::checkPassword(password))
    //     {
    //         std::cout << "User account logged in";
    //         return true;
    //     }
    // }

    return false;
};

bool Account::Login::checkEmail(std::string userProvidedEmail)
{
    std::ifstream myFile;
    myFile.open("account.txt");
    std::string myText;
    if (!myFile)
    {
        std::cerr << "Error: File could not be found";
    }

    if (myFile.is_open())
    {
        std::cout << "File found" << std::endl;
        std::string myFileEmail;
        std::string delimiter = ",";

        while (getline(myFile, myText))
        {
            myFileEmail = myText.substr(0, myText.find(delimiter));

            if (myFileEmail.compare(userProvidedEmail) == 0)
            {
                std::cout << "User has provided the correct email" << std::endl;
                return true;
            }
        }
        std::cout << "Email not found" << std::endl;
        return false;
    }

    return false;
}

bool Account::Login::checkPassword(std::string password)
{

    std::string myFilePassword;
    return true;
}
