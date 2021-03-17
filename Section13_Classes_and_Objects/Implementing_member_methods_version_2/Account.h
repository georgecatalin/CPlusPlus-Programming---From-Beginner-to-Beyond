#ifndef _ACCOUNT_H
#define _ACCOUNT_H

#include <string>

class Account
{
private:
    //Attributes
    std::string name; //you do not want to include namespaces in the class because the namespaces will be inherited all over, and may be you do not want it
    double balance;
    
public:
    //methods declared inline the class
    void set_balance(double bal)
    {
        balance=bal;
    }
    
    double get_balance()
    {
        return balance;
    }
    
    //methods declared outside the class
    void set_name(std::string n);
    std::string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
    
};

#endif // _ACCOUNT_H
