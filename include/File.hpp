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
        std::string iterateThroughFile(std::string splitStringByDelimiter, std::string searchTerm);
        std::string FILEPATH = "account.csv";

    public:

        bool isFile();
        void read();
        void close();
        int colCount();
        std::string splitStringByDelimiter(std::string line, int index, std::string delimiter);
        std::string splitStringByDelimiter(int index, std::string delimiter);
        bool findUserEmail(std::string userProvidedEmail);
        bool checkUserPassword(std::string userProvidedPassword, std::string userProvidedEmail);
    };
}

#endif
