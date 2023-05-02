#include "File.hpp"
#include <iostream>
#include <fstream>
#include <filesystem>
#include "Login.hpp"

bool Data::File::isFile()
{

    if (std::filesystem::exists(FILEPATH))
    {
        std::cout << "File found" << std::endl;
        return true;
    }
    std::cerr << "Error: File could not be found";
    return false;
}


void Data::File::readFile()
{
    loadFile();

}

bool Data::File::findUserEmail(std::string userProvidedEmail)
{
    std::string fileLine;
    std::string fileEmail;

    while (std::getline(myFile, fileLine))
    {   

        fileEmail = splitStringByDelimiter(fileLine, 0, ",");
        if (fileEmail == userProvidedEmail)
        {
            std::cout << "File Email: " << fileEmail << " User Provided Email: " << userProvidedEmail;
            return true;
        }
    }
    std::cout << "User not found";
    return false;
}
// Combine findUserEmail with checkUserPassword;
bool Data::File::checkUserPassword(std::string userProvidedPassword, std::string userProvidedEmail)
{

    std::string fileLine;
    std::string fileEmail;
    std::string filePassword;
    bool isFound;

    while (std::getline(myFile, fileLine))
    {
        fileEmail = splitStringByDelimiter(fileLine, 0, ",");
        filePassword = splitStringByDelimiter(fileLine, fileLine.find(",") + 1, ",");
        //TODO

        std::cout << fileEmail << " " << filePassword << std::endl;
    }
    return true;
}

void Data::File::loadFile()
{
    myFile.open(FILEPATH);
}

void Data::File::closeFile()
{
    myFile.close();
}

std::string Data::File::splitStringByDelimiter(std::string line, int index, std::string delimiter)
{
    std::string newLine;

    newLine = line.substr(0, line.find(","));
    return newLine;
}
