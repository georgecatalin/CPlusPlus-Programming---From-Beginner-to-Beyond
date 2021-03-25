//POLYMORPHISM

#include <iostream>

using namespace std;

class Base
{
public:
    void say_hello() const
    {
        cout<<"Hello, I am a BASE Object"<<endl;
    }
};


class Derived: public Base 
{
public:
    void say_hello() const
    {
        cout<<"Hello, I am a DERIVED Object"<<endl;
    }
};
    
void say_greetings(const Base &object)
    {
        cout<<"Greetings!!!"<<endl;
        object.say_hello();
    }



int main()
{
    Base b;
    b.say_hello();
    
    Derived d;
    d.say_hello();
    
    say_greetings(b); // "Hello, I am a BASE Object" because void say_greetings(const Base &object) has static binding/early binding/compile time binding: it only sees Base &object
    say_greetings(d); // "Hello, I am a BASE Object" because void say_greetings(const Base &object) has static binding/early binding/compile time binding: it only sees Base &object
    
    
    Base *ptr=new Derived(); //translated ptr holds an address for a Base object. a Derived object is a Base object through inheritance
    ptr->say_hello(); //  "Hello, I am a BASE Object" because void say_greetings(const Base &object) has static binding/early binding/compile time binding: it only sees Base &object
    
    return 0;
}
