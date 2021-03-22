//SHALLOW COPYING AND THE COPY CONSTRUCTOR

#include <iostream>

using namespace std;

class Shallow
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
    
    //constructors
    Shallow(int d);
    
    //copy constructor
    Shallow(const Shallow &source);
    
    //Destructor
    ~Shallow();
};

Shallow::Shallow(int d)
{
    data =new int;
    *data=d;
}

Shallow::Shallow(const Shallow &source)
    :data(source.data)
{
    cout<<"Copy constructor - shallow copy"<<endl;
}


Shallow::~Shallow()
{
    delete data;
    cout<<"Destructor freeing data "<<endl;
}

void display_shallow(Shallow s)
{
    cout<<s.get_data_value()<<endl;
}

int main()
{
    Shallow my_object{100};
    display_shallow(my_object);
    
    Shallow my_object_2{my_object};
    my_object_2.set_data_value(1000);
   
    return 0;
}