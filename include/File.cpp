#include "File.hpp"
#include <iostream>
#include <fstream>
#include <filesystem>
#include "Validation.hpp"
#include "Login.hpp"

bool Data::File::isFile(std::string filename)
{

    if (std::filesystem::exists(filename))
    {
        return true;
    }
    std::cerr << "Error: File could not be found";
    return false;
}

int Data::File::readFile(std::string filename, struct Account::Validation validator)
{
    loadFile();
    std::string fileLine;
    Account::Login loginDetails;
    
    while (std::getline(myFile, fileLine))
    {
        validator.checkEmail("gibsonlp");
    }
    closeFile();
    return 0;
}

void Data::File::loadFile()
{
    myFile.open(pathToFile);
}

void Data::File::closeFile()
{
    myFile.close();
}

