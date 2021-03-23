#include <iostream>

using namespace std;


class Base
{
public:
    int a{0};
    void display()
    {
        cout<<" a: "<<a<<" b: "<<b<<" c: "<<c;
    }
    
protected:
    int b{0};
private:
    int c{0};
};


class Derived : public Base
{
    //a is visible from the Derived class and from objects of the class
    //a=34; //if you want to access members of the base class , then do it in a member function, cause specifying the type means allocating them again fresh
    //b is accessible from the Derived class because in inherits the Base class, but not accessible to objects of the Base and Derived Class
    //c is inherited in the Derived class , but not accessible in the Derived Class as it is private. It is also not accessible to objects of Base and Derived Classes
    void get_members()
    {
        a=100; //ok as a is public and inherited
        b=50; // ok as b is protected and visible in the inherited class
        //c=344; // error as c is private, but inherited in the derived class
    }

};


int main()
{
    Base base{};
    base.a=100; //ok
    //base.b=223; // error
    //base.c=2324; //error
    
    Derived derived{};
    derived.a=454; //ok
    //derived.b=23; //error
    //derived.c=2324; //error
    
    return 0;
}