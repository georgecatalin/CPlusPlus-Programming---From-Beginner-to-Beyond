//REDEFINING BASE CLASS METHODS

#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

using namespace std;


int main()
{
    cout<<"=================================== Account class ============================================="<<endl;
    Account a1{1000};
    
    a1.deposit(500);
    a1.withdraw(1000.0);
    a1.withdraw(9000.7);
    
    cout<<"=================================== Savings_Account class ============================================="<<endl;
    Savings_Account s1{1000.0,5.0};
    
    s1.deposit(500);
    s1.withdraw(1000.0);
    s1.withdraw(9000.7);
    
    return 0;
}