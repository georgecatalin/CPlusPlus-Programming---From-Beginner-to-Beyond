#include <iostream>

using namespace std;


int main()
{
    
    int *p; //p is a pointer pointing to an integer, but it is uninitialized :: SERIOUS ISSUE

    
    cout<<"The value of p is : "<<p<<endl; //note: this can be anything since the pointer has not been initialized
    cout<<"The address of p is : "<<&p<<endl;
    cout<<"The size of p is : "<<sizeof p<<endl;
    
    p=nullptr; //nullptr has been added in C++ 11 and it says that the pointer is pointing to NOWHERE
    cout<<"The value of p is : "<<p<<endl;
    cout<<"The address of p is : "<<&p<<endl;

    return 0;
}