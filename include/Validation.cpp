#include "Validation.hpp"
#include <iostream>

bool Account::Validation::validateEmail(std::string userProvidedEmail, std::string fileEmail)
{
  if (userProvidedEmail == fileEmail) 
  {
    return true;
  }
  return false;
}
