#include "Saving_Account.h"
#include <iostream>

using namespace std;

Saving_Account::Saving_Account()
    : interest_rate {3.0} 
{
}

Saving_Account::~Saving_Account()
{
}

void Saving_Account::deposit(double amount)
{
    cout<<"Saving Account Deposit operation called for : "<<amount<<endl;
}

void Saving_Account::withdraw(double amount)
{
    cout<<"Saving Account Withdraw operation called for : "<<amount<<endl;
}