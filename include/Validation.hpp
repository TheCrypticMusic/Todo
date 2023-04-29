#ifndef Validation_hpp
#define Validation_hpp

#include <iostream>

namespace Account {

  struct Validation {

    bool checkEmail(std::string userProvidedEmail);
  }; 
}

#endif
