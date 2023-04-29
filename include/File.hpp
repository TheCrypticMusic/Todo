#ifndef File_hpp
#define File_hpp
#include <iostream>
#include <fstream>
#include "Validation.hpp"

namespace Data
{
    class File
    {

    private:
        std::ifstream myFile;
        void loadFile();
        void closeFile();

    public:
        std::string pathToFile;
        bool isFile(const std::string filename);
        int readFile(std::string filename, struct Account::Validation validator);
    };

}

#endif
