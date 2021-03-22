//DEEP COPY WITH THE COPY CONSTRUCTOR

//you always want to use deep copy when you have classes that use pointers as members

#include  <iostream>

using namespace std;

class Deep
{
    //attributes
private:
    int *data;
    
    //methods
public:
    void set_data_value(int d)
    {
        *data=d;
    }
    
    int get_data_value()
    {
        return *data;
    }
    
    //Constructor
    Deep(int d);
    
    //Copy Constructor
    Deep(const Deep &source);
    
    //Destructor
    ~Deep();
};

Deep::Deep(int d)
{
    data=new int;
    *data=d;
}


Deep::~Deep()
{
    delete data;
    cout<<"Destructor called..."<<endl;
}

//version 1 of writing the DEEP COPY : Copying the pointer and the pointed too address
Deep::Deep(const Deep &source)
{
    data=new int;
    *data=*source.data;
    cout<<"Copy constructor - deep"<<endl;
}

//version 2 of writing the DEEP COPY

//Delegate to Deep(int) and pass the int (*source.data) source pointing to
/*
Deep::Deep(const Deep &source)
 : Deep(*source.data)
{
    cout<<"Copy constructor - deep with constructor delegate version"<<endl;
}
 */

void display_deep(Deep d)
{
    cout<<d.get_data_value()<<endl;
}



int main()
{
    Deep my_object1{100};
    display_deep(my_object1);

   
    Deep my_object2{my_object1};
     my_object2.set_data_value(1000);
    
    return 0;
}