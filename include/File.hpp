#ifndef File_hpp
#define File_hpp
#include <iostream>
#include <fstream>

namespace Data
{
    class File
    {

    private:
        std::ifstream myFile;

    public:
        std::string pathToFile;
        bool isFile(const std::string filename);
        int openFile(std::string filename);
        void loadFile();
        void closeFile();
    };
}

#endif
