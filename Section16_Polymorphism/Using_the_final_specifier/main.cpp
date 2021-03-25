//USING THE FINAL SPECIFIER

/*
The final specifier:
 
  C++ provides the final specifier
   - when used at the class level, the 'final' specifier prevents the class to be derived from or subclassed
   - when used at the method level, the 'final' specifier prevents the virtual method to be overriden in the derived classes
    
class Base final
{
    
};

class Derived final :  public Base
{
    
};
    
 ===============================

    
     

*/

class A
{
  virtual void do_something();  
};

class B : public A
{
    virtual void do_something() final;
}

class C: public B
{
    virtual void do_something(); //COMPILER ERROR CAN NOT BE OVERRIDEN
}

int main()
{
    
    return 0;
}