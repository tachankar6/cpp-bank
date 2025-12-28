#ifndef FILEREADER_HPP
#define FILEREADER_HPP

#include <iostream>
#include <fstream>

class File {
    private:
        std::string fileName;

    public:
        File();
        File(std::string filename);
};


#endif