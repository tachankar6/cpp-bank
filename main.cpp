#include <iostream>
#include <fstream>

// prototypes
void intro();
void menuList();
void menuOption(char option);

int main() {
    intro();
    // need to read list here
    menuList();


    // TODO: create another file to be in charge of reading text
    // TODO: create a number generator that will be able to create or update an existing accNum

    return 0;
}

void intro() {
    std::cout << "\n\n\t\tWelcome to the Bank of Hector project.\n";
    std::cout << "\t\tThis program is intended to replicate being a bank teller\n\n\n";
}


void menuList() {
    char option;
    char optionList[] = {'A','B', 'C', 'D', 'E', 'F', 'a','b','c','d','e','f'};

    std::cout << "\tPlease select one option from the menu below:\n";
    std::cout << "A: Print a list of current users\n";
    std::cout << "B: Select a specific user by name or account number\n";
    std::cout << "C: Organize the users by alphabetical order\n";
    std::cout << "D: Add a new user\n";
    std::cout << "E: Remove a user\n";
    std::cout << "F: Exit the program\n";
    
    std::cin >> option;

    option = toupper(option);
    while (option < 'A' || option > 'F') {
        std::cout << "Not a valid option, please try again.\n";
        std::cin >> option;
        option = toupper(option);
    }
    menuOption(option);
}

void menuOption(char choice){
    switch(choice) {
        case 'A': case 'a':
            // create a function to print users
            std::cout << "You chose option A\n";
            break;
        case 'B': case 'b':
            // create a function to select a certain user
            std::cout << "Option B\n";
            break;
        case 'C': case 'c':
            // create a function to sort users in multiple ways
            std::cout << "Option C\n";
            break;
        case 'D': case 'd':
            // create a function to add a new user
            std::cout << "Option D\n";
            break;
        case 'E': case 'e':
        // create a function to remove a user
            std::cout << "Option E\n";
            break;
        case 'F': case 'f':
            std::cout << "Exiting...\n";
            exit(0);
        break;
    }

}