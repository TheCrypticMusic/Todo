#include "File.hpp"
#include <iostream>
#include <fstream>
#include <filesystem>
#include "Login.hpp"
#include <vector>

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

void Data::File::read()
{
    loadFile();
}

void Data::File::close()
{
    closeFile();
}

std::string Data::File::iterateThroughFile(std::string splitStringByDelimiter, std::string searchTerm)
{
    // std::string fileLine;

    // while (std::getline(myFile, fileLine))
    // {
    //     std::cout << fileLine;
    // }

    return "";
}

bool Data::File::findUserEmail(std::string userProvidedEmail)
{
//
}

int Data::File::colCount()
{
    std::string fileLine;
    std::getline(myFile, fileLine);

    int commaCount = 1;

    for (char c : fileLine)
    {
        if (c == ',')
        {
            commaCount++;
        }
    }
    return commaCount;
}
// Combine findUserEmail with checkUserPassword and use function iterateThroughFile function;
bool Data::File::checkUserPassword(std::string userProvidedPassword, std::string userProvidedEmail)
{
//
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
    newLine = line.substr(line.find(","), 19);
    return newLine;
}
