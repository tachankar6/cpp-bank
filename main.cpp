#include <iostream>

// ctrl + ` - opens terminal in VS Code
//prototypes
void ReadMe();

int main() {

    std::cout << "If you would like to learn more about this program, please press 'Y' or 'y' to pull out a README" << std::endl;
    char a;
    std::cin >> a;

    if(a == 'y' || a == 'Y') {
        ReadMe();
    }
    else {
        std::cout << "Perfect, we shall move on" << std::endl;
    }
    
    return 0;
}

void ReadMe() {
    std::cout << "This program is meant to mimick a bank which options that will allow you to perform tasks\n";
    std::cout << "This includes reading, adding, deleting, or alternating clients personal information";
}