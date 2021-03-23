#include "Account.h"
#include <iostream>

using namespace std;


Account::Account()
    : name{"An account"} , balance { 24.4} 
{
    
}

Account::~Account()
{
    
}


void Account::deposit(double amount)
{
    cout<<"Deposit operation called for : "<<amount<<endl;
}


void Account::withdraw(double amount)
{
    cout<<"Withdraw operation called for : "<<amount<<endl;
}