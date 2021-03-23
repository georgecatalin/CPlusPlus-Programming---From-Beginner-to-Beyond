#ifndef _SAVING_ACCOUNT_H_
#define _SAVING_ACCOUNT_H_

#include "Account.h" // Base class: <global>::Account

class Saving_Account : public Account
{
public:
    double interest_rate;
    Saving_Account();
    ~Saving_Account();
    
    void deposit(double amount);
    void withdraw(double amount);

};

#endif // _SAVING_ACCOUNT_H_
