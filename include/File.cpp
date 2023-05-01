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
    // std::string fileLine;
    // std::string fileEmail;

    // while (std::getline(myFile, fileLine))
    // {
        
    //     fileEmail = splitStringByDelimiter(fileLine, 0, ",");
    //     validator.checkEmail();
    // }
    // closeFile();
    return 0;
}

bool Data::File::findUserEmail(std::string userProvidedEmail, struct Account::Validation validator)
{
    std::string fileLine;
    std::string fileEmail;
    bool isFound;

    while (std::getline(myFile, fileLine))
    {

        fileEmail = splitStringByDelimiter(fileLine, 0, ",");
        isFound = validator.validateEmail("gibsonlp@live.co.uk", fileEmail);
        if (isFound)
        { 
            return true;
        }
    }
    return false;
}
// Combine findUserEmail with checkUserPassword;
bool Data::File::checkUserPassword(std::string userProvidedPassword, std::string userProvidedEmail, struct Account::Validation validator)
{

    std::string fileLine;
    std::string fileEmail;
    std::string filePassword;
    bool isFound;

    while (std::getline(myFile, fileLine))
    {
        fileEmail = splitStringByDelimiter(fileLine, 0, ",");
        filePassword = splitStringByDelimiter(fileLine, fileLine.find(",") + 1, ",");

    }
    return true;
}

void Data::File::loadFile()
{
    myFile.open(pathToFile);
}

void Data::File::closeFile()
{
    myFile.close();
}

std::string Data::File::splitStringByDelimiter(std::string line, int index, std::string delimiter)
{
    std::string newLine;

    newLine = line.substr(0, line.find(","));
    std::cout << newLine;
    return newLine;
}
