#include "Account.h"
#include <iostream>
using namespace std;

Account::Account()
 : Account(0.0) //delegating constructor
{
    
}

Account::Account(double balance)
 : balance {balance}
 {
     
 }

Account::~Account()
{
}

void Account::deposit(double amount)
{
    balance+=amount;
    cout<<"Base Class deposit function called with the amount: "<<amount<<" and the total balance is "<<balance<<endl;
}

void Account::withdraw(double amount)
{
    if(balance-amount>0)
    {
        balance-=amount;
        cout<<"Base Class withdraw function called with the amount: "<<amount<<" and the total balance is "<<balance<<endl;
    }
    else
    {
        cout<<"Insufficient funds"<<endl;
    }
}