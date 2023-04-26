#include "File.hpp"
#include <iostream>
#include <fstream>
#include <filesystem>

bool Data::File::isFile(std::string filename)
{

    if (std::filesystem::exists(filename))
    {
        return true;
    }
    return false;
}

int Data::File::openFile(std::string filename)
{
    loadFile();
    std::string fileLine;

    while (std::getline(myFile, fileLine))
    {
        std::cout << fileLine << std::endl;
    }
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
