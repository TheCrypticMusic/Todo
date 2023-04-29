#include "Validation.hpp"
#include <iostream>

bool Account::Validation::checkEmail(std::string userProvidedEmail)
{
  std::cout << userProvidedEmail << std::endl;
  std::cout << "checkEmail function" << std::endl;
  return true;
}
