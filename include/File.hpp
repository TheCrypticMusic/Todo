//
//  File.hpp
//  Todo
//
//  Created by Daniel Gibson on 18/04/2023.
//

#ifndef File_hpp
#define File_hpp
#include <iostream>

namespace Data {
    class File {
    public:
        const std::string pathToFile;
        
        bool isFile(const std::string filename);
        void openFile(std::string filename, std::ifstream& file);
    };
}

#endif /* File_hpp */
