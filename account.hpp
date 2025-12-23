#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <iostream>

//* This class gets the information from User, where PIN and balance will live, hopefully
class Account {
    private: 
        int pinNum;
        float balance;

    public: 
        Account();
        Account(int, float);
        int getPIN();
        float getBalance();
        void setPIN(int);
        void setBalance (float);
};

#endif