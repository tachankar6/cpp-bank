#include <iostream>
#include <fstream>
#include "FileReader.hpp"
#include "User.hpp"

// if the user wants to input their own file
FileReader::FileReader() {
    std::string filename;
    std::string account, first, last;
    int pin, balance;
    std::cout << "What file would you like to open?\n";
    std::getline(std::cin, fileName);

    std::ifstream textFile(fileName);
    if(!textFile) {
        std::cout << "File name " << fileName << " could not be opened, please select another file\n";
        do {
            std::cout << "Unable to open that file name\nPlease select another";
            std::getline(std::cin, fileName);
        } while (!textFile);
    }
    else if (textFile.is_open()) { // condition for file being opened
        while (textFile >> account >> first >> last >> pin >> balance) {
            std::string fullName = first +  " " + last;
            User users(account, first, last, pin, balance); // saves the files into a user account
        }
    }

}

// if the user uses the default file that we already have
FileReader::FileReader(std::string inFileName) {
    std::ifstream textFile(inFileName); 
    // what if the text file was deleted, how do we go upon making a work around

}





FileReader::FileReader(std::string fileName) {
    std::ifstream inputFile(fileName);
    if(!inputFile) {
        std::cout << "Was not able to open file: " << fileName << std::endl;
        return;
    }
    std::string firstName, lastName, fullName, accNum;
    int pin;
    float balance;
    
    while(inputFile >> accNum >> firstName >> lastName >> pin >> balance) {
        fullName = firstName + lastName;
        User user(accNum, firstName, lastName, pin, balance);
        userMap[accNum] = user;
    }
    inputFile.close();
}