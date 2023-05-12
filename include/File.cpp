#include "File.hpp"
#include <iostream>
#include <fstream>
#include <filesystem>
#include "Login.hpp"
#include <vector>
#include <sstream>

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

std::vector<std::vector<std::string>> Data::File::fileToVector()
{
    read();
    std::vector<std::vector<std::string>> data;

    std::string line;
    while (std::getline(myFile, line))
    {
        std::vector<std::string> row;
        std::stringstream lineStream(line);
        std::string cell;

        while (std::getline(lineStream, cell, ','))
        {
            row.push_back(cell);
        }

        data.push_back(row);
    }
    close();
    return data;
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

int Data::File::userUID(std::string userProvidedEmail, std::string userProvidedPassword)
{
    loadVectorFile();
    for (const auto &row : vectorFile)
    {
        if(userProvidedEmail == row[1] && userProvidedPassword[2])
        {
            int UID = stoi(row[0]);
            return UID;
        }
    }
    return -1;
}

std::string Data::File::userUsername(std::string userProvidedEmail, std::string userProvidedPassword)
{
   
    for (const auto &row : vectorFile)
    {
        if (userProvidedEmail == row[1] && userProvidedEmail[2])
        {
            std::string username = row[3];
            return username;
        }
    }
    return "No username found";
}

bool Data::File::findUserEmail(std::string userProvidedEmail)
{

    for (const auto &row : vectorFile)
    {
        if (userProvidedEmail == row[1]) {
            return true;
        }
    }

    return false;
}

bool Data::File::checkUserPassword(std::string userProvidedPassword, std::string userProvidedEmail)
{
    for (const auto &row : vectorFile)
    {   
        if (userProvidedEmail == row[1] && userProvidedPassword == row[2])
        {
            return true;
        }
    }

    return false;
}


void Data::File::loadFile()
{
    myFile.open(FILEPATH);
}

void Data::File::closeFile()
{
    myFile.close();
}

void Data::File::loadVectorFile()
{
    std::vector<std::vector<std::string>> data = fileToVector();
    vectorFile = data;
}

std::string Data::File::splitStringByDelimiter(std::string line, int index, std::string delimiter)
{

    std::string newLine;
    newLine = line.substr(line.find(","), 19);
    return newLine;
}
