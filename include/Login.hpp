#ifndef Login_hpp
#define Login_hpp

#include <iostream>

namespace Account
{
    class Login
    {
    public:
        std::string email;
        std::string password;

        bool accountDetails(std::string email, std::string password);

    private:
        bool checkEmail(std::string email);
        bool checkPassword(std::string password);
    };
}

#endif /* Login_hpp */
