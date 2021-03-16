//IMPLEMENTING MEMBER METHODS INSIDE THE CLASS DECLARATION AND METHODS DECLARED OUTSIDE THE CLASS DECLARATION

#include <iostream>
#include <string>

using namespace std;


class Account
{
private:
    //Attributes
    string name;
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
    void set_name(string n);
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
    
};


void Account::set_name(string n)
{
    name=n;
}

string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    balance+=amount;
    cout<<"The account "<<name<<" has the balance "<<balance<<endl;
    return true;
}

bool Account::withdraw(double amount)
{
    if(balance-amount>=0)
    {
    balance-=amount;
    cout<<"The account "<<name<<" has the balance "<<balance<<endl;
    return true;
    }
    else
    {
    return false;
    }
}

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);
    
    if (frank_account.deposit(200.0))
    {
        cout<<"Deposit OK"<<endl;
    }
    else
    {
        cout<<"Deposit not allowed"<<endl;
    }
    
    if(frank_account.withdraw(500.0))
    {
        cout<<"Withdrawal OK"<<endl;
    }
    else
    {
        cout<<"Not sufficient funds"<<endl;
    }
    
    return 0;
}