//CONSTRUCTORS AND DESTRUCTORS

#include <iostream>

using namespace std;

class Base
{
    //attributes
    private:
     int my_value;
    //methods
    public:
    Base(): my_value{0} //sets the my_value to 0
    {
        cout<<"Base no-args constructor has been appealed"<<endl;
    }
    
    Base(int x) : my_value {x} //sets the my_value to x
    {
        cout<<"Base single-arg constructor has been appealed."<<endl;
    }
    
    ~Base()
    {
        cout<<"Base destructor has been appealed."<<endl;
    }
};


class Derived: public Base
{
    using Base::Base;
    //attributes
private:
    int my_double_value;
    //methods
public:

    Derived(): my_double_value {0} //sets the value of my_double_value to 0
    {
        cout<<"Derived class no-args constructor appealed."<<endl;
    }
    
    
    
    Derived(int x) : my_double_value {2*x} //sets the value of my_double_value to 2*x
    {
        cout<<"Derived class single-arg constructor appealed."<<endl;
    }
    
    ~Derived()
    {
        cout<<"Derived class destructor appealed."<<endl;
    }
    
};



int main()
{
    
    //Base my_object_b;
    //Base my_object_b{100};
    
    //Derived my_object_d;
    Derived my_object_d{2000};
    
    
    return 0;
}