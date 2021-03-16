//Accessing Class Members

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Player
{
    public:  //by default, if not specified, the member access modifier is private
    //attributes
    string name;
    int health;
    int xp;
    
    //methods
    void talk(string what_to_say)
    {
        cout<<name<<" says "<<what_to_say<<endl;
    };
    
    bool is_dead();
};


class Account
{
    public:    //by default, if not specified, the member access modifier is private
    //attributes
    string name{"George"};
    double balance{10.0};
    
    //methods
    bool deposit(double amount)
    {
      balance+=amount;
      cout<<"\nThe amount now is: "<<balance<<endl;
      return true;  
    };
    
    bool withdraw(double amount)
    {
        balance-=amount;
        cout<<"\nThe amount now is: "<<balance<<endl;
        return true;  
     };
};

int main()
{
    Account george_account;
    george_account.name=" George Account ";
    george_account.balance=500.0;
    
    george_account.deposit(1000.0);
    george_account.withdraw(200.0);
    
    
    Account *mara_account=new Account();
    
    //pointer members can be accessed in two ways
    // version 1 by dereferencing the pointer. Place the dereferencing operator in parenthesis because . has priority
    (*mara_account).name=" Mara Account ";
    (*mara_account).balance=700.0;
    (*mara_account).deposit(500.0);
    (*mara_account).withdraw(350.0);
    
    delete mara_account; //release the memory on the heap because it does not have automatic memory management like the stack
    
    
    Account *bibbex_account=new Account();
    // version 2 by using the arrow operator
    bibbex_account->name=" Bibbex Account ";
    bibbex_account->balance=450.0;
    bibbex_account->deposit(200.0);
    bibbex_account->withdraw(150.0);

    delete bibbex_account; //release the memory on the heap because it does not have automatic memory management like the stack
    
    return 0;
}