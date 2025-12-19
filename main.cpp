#include <iostream>
#include <fstream>

// prototypes
void intro();

int main() {
    intro();

    // TODO: create another file to be in charge of reading text
    // TODO: create a number generator that will be able to create or update an existing accNum
    std::ifstream inFile("User_Info.txt");
    if(!inFile) {
        std::cout << "There is no existing file with that name\n";
    } else {
        while(inFile) {
            std::string s;
            inFile >> s;
            std::cout << s;
        } 
    }


    return 0;
}

void intro() {
    std::cout << "\n\n\t\tWelcome to the Bank of Hector project.\n";
    std::cout << "\t\tThis program is intended to replicate being a bank teller\n\n\n";
}


/*
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inFile("name.txt");

    if (!inFile) {
        std::cout << "There is no existing file with that name\n";
        return 1;
    }

    std::string s;
    inFile >> s;              // read ONE word
    std::cout << s << "\n";

    return 0;
}
*/