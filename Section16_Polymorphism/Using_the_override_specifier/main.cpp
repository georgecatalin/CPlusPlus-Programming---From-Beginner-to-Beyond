//USING THE OVERRIDE SPECIFIER

/*
 - We can override base class virtual functions
 - the function signature and returned type must be exactly the same in the derived classes
 - if they are different , then we have redefinition and not overriding
 - REDEFINITION IS STATICALLY BOUND
 - OVERRIDING IS DYNAMICALLY BOUND
 - C++ provides an override specifier to have the compiler ensure overriding
 

 
 */
 
 
 #include <iostream>
 
 using namespace std;
 
 
class Base
 {
public:
    virtual void say_hello() const
    {
        cout<<"I am Hello from the Base"<<endl;
    }

   virtual ~Base()
   {
       
   }
 };
 
 
 class Derived : public Base
 {
public:
     
     virtual void say_hello() const override  //the signature of the function is not the same, it misses 'const' hence the function will be statically bound when appealed to via Base Class Pointers
     {
         cout<<"I am Hello from Derived"<<endl;
     }
     
     virtual ~Derived()
     {
         
     }
 };
 
 
 int main()
 {
     Base *p1=new Base();   //dynamic bound due to virtual specifier  <"I am Hello from the Base
     p1->say_hello();
     
     Derived *p2=new Derived(); //static bound, no special marking <"I am Hello from Derived"
     p2->say_hello();
     
     Base *p3=new Derived();  //static or dynamic bound depending if the function is redefined or overridden  <"I am Hello from the Base after setting missing const in signature dynamic bound and <"I am Hello from Derived"
     p3->say_hello();
     
     
     return 0;
 }