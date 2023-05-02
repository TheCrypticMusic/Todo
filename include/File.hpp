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
        void loadFile();
        void closeFile();
        std::string FILEPATH = "account.txt";

    public:

        bool isFile();
        void readFile();

        std::string splitStringByDelimiter(std::string line, int index, std::string delimiter);
        bool findUserEmail(std::string userProvidedEmail);
        bool checkUserPassword(std::string userProvidedPassword, std::string userProvidedEmail);
    };
}

#endif
