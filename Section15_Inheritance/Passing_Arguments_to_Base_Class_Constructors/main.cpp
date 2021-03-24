//PASSING ARGUMENTS TO BASE CLASS CONSTRUCTORS

#include <iostream>

using namespace std;

class Base
{
    //attributes
private:
    int my_value;
    //methods
public:
    Base():my_value{0}
    {
        cout<<"Base No-args constructor "<<endl; 
    }
    
    Base(int x): my_value{x}
    {
        cout<<"int Base constructor "<<endl;
    }
   
    ~Base()
    {
        cout<<"Base destructor"<<endl;
    } 
};

class Derived : public Base
{
     //attributes
private:
     int my_double_value;
     //methods
public:
     Derived()
     :Base{},my_double_value{0}
     {
         cout<<"Derived no-args constructor "<<endl;
     }
     
     Derived(int x)
     : Base{x},my_double_value{2*x}
     {
         cout<<"Int Derived constructor "<<endl;
     }
     
     ~Derived()
     {
         cout<<"Derived destructor"<<endl;
     }
};

int main()
{
    //Derived d;
    Derived d{100};
    
    return 0;
}