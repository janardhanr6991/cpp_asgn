#pragma once
#include <stdexcept>

class Account {
public:
    double balance;

    Account(double balance) : balance(balance) {}

    void sub(double amount) {
        if (balance < amount) {
            throw std::runtime_error("Insufficient funds");
        }
        balance -= amount;
    }

    void add(double amount) {
        if (amount > 10000) {
            throw std::runtime_error("Amount too large");
        }
        balance += amount;
    }
};
