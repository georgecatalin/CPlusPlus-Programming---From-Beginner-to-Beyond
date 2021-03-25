//VIRTUAL FUNCTIONS

/*

When we derive a class from a base class , we can redefine the base classes behaviours in the derived class. This creates specialized versions of the functions in the derived class.
If we do not use the 'virtual' keyword with these classes then, these are statically bound/early time bound/compile time bound.
 
Overrriden functions are bound dynamically. We do this by defining the functions virtual. So virtual functions are overridden and these allow us to think abstractly.

Declaring virtual functions:
 -declare the function you want to override as virtual in the base class
 - virtual functions are virtual from this point all-way-down in the hierarchy
 - dynamic polimorphism is achieved by dynamic binding at run time by use of base class pointers or references

  class Account()
   {
    virtual void withdraw(double amount);
    ...
   };

   -override the function in the derived class
   -function signature and returned type must match exactly
   -virtual keyword is not required in the derived class , but it is good practice
   -dynamic bound works only with base class pointers or references 
   -if you do not provide an overridden version, then it is inherited from the base class
    
    
    class Checking:public Account
     {
         virtual void withdraw(double ammount);
         ...
     };

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
    
};


class Checking: public Account
{
public:
     virtual void withdraw(double amount)
    {
        cout<<"In Checking - withdraw() "<<amount<<endl;
    }
};

class Savings: public Account
{
public:
     virtual void withdraw(double amount)
    {
        cout<<"In Savings - withdraw() " << amount<<endl;
    }
};

class Trust: public Account
{
public:
    virtual void withdraw(double amount)
    {
         cout<<"In Trust - withdraw() "<<amount <<endl;
    }
   
};

int main()
{
    cout<<"====================== Pointers ==================================="<<endl;
    
    Account *p1=new Account();
    Account *p2=new Checking();
    Account *p3=new Savings();
    Account *p4=new Trust();
    
    p1->withdraw(1000); //when the function to be overriden in the base class is defined without 'virtual', then there is static binding  Account::withdraw()
    p2->withdraw(1000); //when the function to be overriden in the base class is defined without 'virtual', then there is static binding  Account::withdraw()
    p3->withdraw(1000); //when the function to be overriden in the base class is defined without 'virtual', then there is static binding  Account::withdraw()
    p4->withdraw(1000); //when the function to be overriden in the base class is defined without 'virtual', then there is static binding  Account::withdraw()
    
    cout<<"\n=====================  Clean up ==============================="<<endl;
    
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    return 0;
}