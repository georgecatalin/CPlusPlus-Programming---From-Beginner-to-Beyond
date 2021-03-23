#include <iostream>
#include <string>
#include "Account.h"
#include "Saving_Account.h"

using namespace std;

int main()
{
    cout<<"*****************************Account **********************************"<<endl;
    Account account {};
    account.deposit(1000.0);
    account.withdraw(500.3);
    
    
    cout<<endl;
    
    Account *ptr_account{nullptr};
    ptr_account=new Account();
    ptr_account->deposit(700.5);
    ptr_account->withdraw(456.6);
    delete ptr_account;
    
    cout<<endl;
    cout<<"*****************************Savings Account **********************************"<<endl;
    Saving_Account sa {};
    sa.deposit(678.5);
    sa.withdraw(667.54);
    cout<<endl;
    
    
    Saving_Account *ptr_sa{nullptr} ;
    ptr_sa->deposit(433.3);
    ptr_sa->withdraw(234234.4);
    delete ptr_sa;
    cout<<endl;
    
    
    
    
    return 0;
}