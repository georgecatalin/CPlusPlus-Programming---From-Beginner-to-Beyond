#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_

#include "Account.h" // Base class: :Account

//Savings Account Class
// Deposit method increments amount to be deposited by amount*int_rate percentagel
//So a 1000 deposit at 5% interest rate will deposit 1000+0.05*1000=1000+50=1050

//Withdraw method does not specialize for this kind of account

class Savings_Account : public Account
{
protected:
    double interest_rate;
public:
    Savings_Account();
    Savings_Account(double balance, double interest_rate_val);
    
    ~Savings_Account();
    
    void deposit(double amount);
    //withdraw member function will be inherited from Account() base

};

#endif // _SAVINGS_ACCOUNT_H_
