#include <iostream>
#include "User.hpp"

// default constructor for worst case
User::User() {
    this->accNum = "No account number";
    this->firstName = "No first name";
    this->lastName = "No last name";
    this->fullName = "No full name to create";
    // TODO: create a way that no one can choose pin 0000
    this->PIN = 0000;
    this->balance = 0.00;

    // TODO: create a separate class to handle PIN and BALANCE

}

User::User(std::string account_number, std::string first_name, std::string last_name, int PIN, float balance): accNum(account_number), firstName(first_name), lastName(last_name) { //* create a case to handle PIN and balance
}

std::string User::getAccNum() {
    return accNum;
}

std::string User::getFN() {
    return firstName;
}

std::string User::getLN() {
    return lastName;
}

std::string User::getFullName() {
    return firstName + " " + lastName;
}
int User::getPIN() {
    return PIN;
}

float User::getBalance() {
    return balance;
}