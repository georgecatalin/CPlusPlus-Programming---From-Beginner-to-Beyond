#include "Savings_Account.h"
#include <iostream>

using namespace std;

Savings_Account::Savings_Account(double balance, double interest_rate_val)
    : Account{balance}, interest_rate{interest_rate_val} 
{
    cout<<"Derived Class with args constructor called."<<endl;
}

Savings_Account::Savings_Account()
 : Savings_Account{0.0,0.0}
{
    cout<<"Derived Class no-args constructor called. "<<endl;
}

void Savings_Account::deposit(double amount)
{
    amount+=(amount*interest_rate/100);
    cout<<"Derived deposit function called "<<endl;
    Account::deposit(amount); //appeal to the Base Class to provide the deposit functionality
    cout<<"Base deposit function called "<<endl;
}


Savings_Account::~Savings_Account()
{
}

