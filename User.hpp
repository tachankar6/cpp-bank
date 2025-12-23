#ifndef USER_HPP
#define USER_HPP

#include <iostream>

// creates a User to hold the values of the read file.
// TODO: do not want pin and balance to appear here. Create another class for Account details 
class User {
    private:
        std::string accNum;
        std::string firstName;
        std::string lastName;
        std::string fullName;

        // can we create a separate class for these two? 
        int PIN;
        float balance;


    public:
        User();
        User(std::string, std::string, std::string, int, float);
        std::string getAccNum();
        std::string getFN();
        std::string getLN();
        std::string getFullName();
        
        float getBalance();
        int getPIN();

        void setAccNum(std::string);
        void setFN(std::string);
        void setLN(std::string);
        void setBalance();
        void setPIN();

};

#endif