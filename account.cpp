#include <iostream>
#include "account.hpp"

Account::Account() {
    this->pinNum = 0000;
    this->balance = 00.00;
}

// can use either or
/* Account::Account(int pins, float bal): pinNum(pins), balance(bal) {
}*/
Account::Account(int pins, float bal) {
    this->balance = bal;
    this->pinNum = pins;
}

int Account::getPIN() {
    return pinNum;
}

float Account::getBalance() {
    return balance;
}

void Account::setPIN(int pin_num) {
    this->pinNum = pin_num;
}

void Account::setBalance(float bala) {
    this->balance = bala;
}