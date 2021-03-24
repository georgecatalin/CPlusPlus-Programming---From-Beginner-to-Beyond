#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account
{
protected:
    double balance;
public:
    Account();
    Account(double balance);
    ~Account();
    
 
    void deposit(double amount);
    void withdraw(double amount);

};

#endif // _ACCOUNT_H_
