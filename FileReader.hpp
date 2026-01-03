#ifndef FILEREADER_HPP
#define FILEREADER_HPP

#include <iostream>
#include <fstream>

class FileReader {
    private:
        std::string fileName;

    public:
        FileReader();
        FileReader(std::string filename);
};


#endif