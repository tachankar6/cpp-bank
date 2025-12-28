void File::fileRead(std::string fileName) {
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