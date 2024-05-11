#pragma once
#include "account.h"

// Write your solution here
void transferFunds(Account& from, Account& to, double amount) {
    from.sub(amount);
    to.add(amount);
}
