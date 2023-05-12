#ifndef File_hpp
#define File_hpp
#include <iostream>
#include <fstream>
#include <vector>


namespace Data
{
    class File
    {

    private:
        std::ifstream myFile;
        std::vector<std::vector<std::string>> fileToVector();
        std::vector<std::vector<std::string>> vectorFile;
        void loadFile();
        void closeFile();
        std::string FILEPATH = "login_details.csv";

    public:
        void loadVectorFile();
        bool isFile();
        void read();
        void close();
        int colCount();
        std::string splitStringByDelimiter(std::string line, int index, std::string delimiter);
        std::string splitStringByDelimiter(int index, std::string delimiter);
        bool findUserEmail(std::string userProvidedEmail);
        bool checkUserPassword(std::string userProvidedPassword, std::string userProvidedEmail);
        int userUID(std::string userProvidedEmail, std::string userProvidedPassword);
        std::string userUsername(std::string userProvidedEmail, std::string userProvidedPassword);
    };
}

#endif
