//USING BASE CLASS REFERENCES


/*
 - We can use Base Class References with dynamic polimorphism
 - This is useful when we pass objects to functions by reference that expect a Base Class reference
 
 Account a;
 Account &ref=a;
 ref.withdraw(1000); //Account::withdraw() bound dynamically
 
 
 Trust t;
 Account &ref1=t;
 ref1.withdraw(1000); //Trust::withdraw();  bound dynamically
 
 */
 
  #include <iostream>

using namespace std;

//this class uses dynamic polipmorphism for the withdraw method

class Account
{
public:
    virtual  void withdraw(double amount)
    {
        cout<<"In Account - withdraw() "<< amount<<endl;
    }
    
   virtual ~Account()
    {
        cout<<"In Account - deconstructor"<<endl;
    }
    
};


class Checking: public Account
{
public:
     virtual void withdraw(double amount)
    {
        cout<<"In Checking - withdraw() "<<amount<<endl;
    }
    
    virtual ~Checking()  //the 'virtual' keyword is not a must-have, but it is good practice for the sake of readability in the derived class
    {
        cout<<"In Checking - deconstructor"<<endl;
    }
};

class Savings: public Account
{
public:
     virtual void withdraw(double amount)
    {
        cout<<"In Savings - withdraw() " << amount<<endl;
    }
     
   virtual  ~Savings() //the 'virtual' keyword is not a must-have, but it is good practice for the sake of readability in the derived class. Because once you stated in the Base class the destructor as virtual, then it is virtual in all the derived classes
    {
        cout<<"In Savings - deconstructor"<<endl;
    }
};

class Trust: public Account
{
public:
    virtual void withdraw(double amount)
    {
         cout<<"In Trust - withdraw() "<<amount <<endl;
    }
   
  virtual ~Trust() //the 'virtual' keyword is not a must-have, but it is good practice for the sake of readability in the derived class. Because once you stated in the Base class the destructor as virtual, then it is virtual in all the derived classes
   {
       cout<<"In Trust - deconstructor"<<endl;
   }
   
   
};

void do_withdraw(Account &account, double amount)
{
    account.withdraw(amount); //this will be bound dynamically due to the base class reference Account &account
}



int main()
{
    Account a;
    Account &ref=a;
    ref.withdraw(1000);  //dynamic bound Account::withdraw
    
    Trust t;
    Account &ref1=t;
    ref1.withdraw(2000); //dynamic bound Base Class Reference, inheritance , virtual functions - conditions so Trust::withdraw()
    
    
    Account a1;
    Savings s1;
    Checking c1;
    Trust t1;
    
   do_withdraw(a1,200); //withdraw() is virtual, dynamic bound due to base class reference
   do_withdraw(s1,100);
   do_withdraw(c1,1000);
   do_withdraw(t1,1000);
    
    
    return 0;
}