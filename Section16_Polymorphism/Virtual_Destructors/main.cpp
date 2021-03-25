//VIRTUAL DESTRUCTORS

/*
 Problems can happen when deleting polimorphic objects.
 If a derived class is destroyed by deleting its storage via the base class pointer and the class has a non-virtual destructor, then the behaviours is undefined in the C++ standard
 Derived objects must be destroyed in the correct order starting at the correct destructor.
 
 Simple solution to a potentially serious situation:
  - if a class has virtual functions, ALWAYS provide a public virtual destructor
  - if a base class destructor is virtual, then all the derived classes destructors are virtual


    class Account
    {
        virtual void withdraw(double amount);
        virtual ~Account();
    }
  
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