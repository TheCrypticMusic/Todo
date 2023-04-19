#ifndef File_hpp
#define File_hpp
#include <iostream>

namespace Data
{
    class File
    {
    public:
        std::string pathToFile;
        bool isFile(const std::string filename);
        void openFile(std::string filename);
    };
}

#endif /* File_hpp */
