#include "Person.hpp"
#include <iostream>

void Account::User::printUser() {
    std::cout << "Username: " << Account::User::username << "\nAge: " << Account::User::age << "\n";
}

