//PURE VIRTUAL FUNCTIONS AND ABSTRACT CLASSES

/*

ABSTRACT CLASS
-Is a class that can not be used to instantiate objects
-These types of classes are used as bases for hierarchical models to inherit from
-Often these kind of classes are referred to Abstract Base Classes
-Can contain at least one pure virtual function

CONCRETE CLASS
-Is a class that can be used to instantiate object from
-All their member functions are defined

Pure virtual functions
-these sort of functions make a class abstract
-specified like this
 virtual void function() =0; //pure virtual function
-typically they do not provide implementations



class Shape
{
private:
    //attributes common to all shapes
public:
    virtual void draw_shape() =0; //pure virtual function
    virtual void rotate() =0; //pure virtual function
    
    virtual ~Shape();
};



class Circle : public Shape //this becomes a CONCRETE CLASS can be used to instatiate objects
{
private:
    //attributes common to circles
public:
    virtual void do_draw() override
    {
        //provide implementation for this function, otherwise the class remains still abstract
    }
    
    virtual void rotate() override
    {
        //provide implementation for this function, otherwise the class Circle does not become Concrete Class
    }
    
    virtual ~Circle();  //this is the virtual destructor to delete the object
}

*/

#include <iostream>
#include <vector>

using namespace std;

class  Shape  //this is going to be an abstract class
{
private:
    //attributes common to all shapes here
public:
    virtual void draw() =0; //this is a pure virtual functions, thus making the class an abstract one. And since this class is inherited from, then this class will an abstract base class
    virtual void rotate() =0; //this is a pure virtual function, again. Distinctive sign for an abstract class
    
    virtual ~Shape()  //virtual destructor needed for the class to function properly
    {
        
    }
};

class OpenShape : public Shape //this is going to be an abstract class too
{
    public:
    virtual ~OpenShape(){}; //virtual destructor needed so that the class to function properly
};


class ClosedShape : public Shape //this is going to be an abstract class too
{
    public:
    virtual ~ClosedShape(){}; //virtual destructor needed so that the class to function properly
};

class Line: public OpenShape  //this is going to be a Concrete class- it will provide implementations of the pure virtual functions (override these)
{
private:
    //attributes common to all lines
public:
    virtual void draw() override //the implementation of the pure virtual function from the base , makes the class a concrete class
    {
        cout<<"Draw a line."<<endl;
    }
    
    virtual void rotate() override
    {
        cout<<"Rotate a line"<<endl;
    }
    
    virtual ~Line()
    {
        
    }
};

class Circle : public ClosedShape //this is going to be a Concrete class- it will provide implementations of the pure virtual functions (override these)
{
private:
    //attributes common to all circles
public:
    virtual void draw() override
    {
        cout<<"Draw from Circle"<<endl;
    }
    
    virtual void rotate() override
    {
        cout<<"Rotate from circle"<<endl;
    }
    
    virtual ~Circle()
    {
        
    }
};

class Square : public ClosedShape //this will be a Concrete class since it is going to provide implementations of the pure virtual functions in here
{
private:
    //attributes common to all squares
public:
    virtual void draw() override
    {
        cout<<"Draw from square"<<endl;
    }
    
    virtual void rotate() override
    {
        cout<<"Rotate from square"<<endl;
    }
    
    virtual ~Square()
    {
        
    }
    
};

void my_function(const vector<Shape *> &the_vector)  //Base Class Reference here
{
    for(const auto element : the_vector)
    {
        element->draw();
        element->rotate();
    }
}



int main()
{
    //Shape s; //compiler error
    //Shape *s=new Shape(); //compiler error
    
      cout<<"\n************************ Static Poluymorphism *************************************"<<endl;
    
    Line l; //it compiles well, static polymorphism/bound since it is a concrete class
    l.draw(); //static bound to class at compile time
    
    cout<<"\n************************ Dynamic Poluymorphism *************************************"<<endl;
    
    //inheritance, virtual functions and base class pointers or base class references are the conditions for dynamic polymorphism
    
    Shape *s1=new Line();
    s1->draw();  //dynamic polymorphism
    s1->rotate(); //dynamic polymorphism
    
    delete s1;
    
    
    cout<<"\n************************ Dynamic Poluymorphism with a vector loop *************************************"<<endl;
    
    //Base Class pointers below
    Shape *sh1=new Line();
    Shape *sh2=new Circle();
    Shape *sh3=new Square();
    
    vector<Shape *> my_vector{sh1,sh2,sh3};
    
    for(const auto element : my_vector)
    {
        element->draw();
        element->rotate();
    }
    
    
    cout<<"\n************************ Dynamic Poluymorphism with a regular function that contains a loop*************************************"<<endl;
    
    my_function(my_vector);
    
    return 0;
}