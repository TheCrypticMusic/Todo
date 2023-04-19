#include "File.hpp"
#include <iostream>
#include <fstream>
#include <filesystem>

bool Data::File::isFile(const std::string filename)
{

    if (std::filesystem::exists(filename))
    {
        return true;
    }
    return false;
}

void Data::File::openFile(std::string filename)
{
}