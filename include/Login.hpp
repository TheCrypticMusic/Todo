#ifndef Login_hpp
#define Login_hpp

#include <iostream>
#include "File.hpp"

namespace Account
{
    class Login
    {
    public:
        std::string email;
        std::string password;

        Login(std::string, std::string);

        bool accountDetails(std::string email, std::string username, int age);

    private:
        bool checkUserExists(std::string userProvidedEmail, std::string userProvidedPassword);
        bool checkEmail(std::string userProvidedEmail);
        bool checkPassword(std::string userProvidedEmail, std::string userProvidedPassword);
        void login();
    };
}

#endif
