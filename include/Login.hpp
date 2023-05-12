#ifndef Login_hpp
#define Login_hpp

#include <iostream>
#include "Person.hpp"
#include "File.hpp"

namespace Account
{
    class Login
    {
    public:
        std::string email;
        std::string password;

        struct Account::User getUser();
        Login(std::string, std::string);

        struct Account::User accountDetails(std::string email, std::string username, int UID);

    private:
        bool checkUserExists(std::string userProvidedEmail, std::string userProvidedPassword);
        bool checkEmail(std::string userProvidedEmail);
        bool checkPassword(std::string userProvidedEmail, std::string userProvidedPassword);
        void login(Account::User &user);
        struct Account::User user;
    };
}

#endif
