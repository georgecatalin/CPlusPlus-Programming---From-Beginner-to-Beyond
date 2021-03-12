#include <iostream>

using namespace std;

void double_pointer(int *ptr);

void double_pointer(int *ptr)
{
    //*ptr=*ptr *2 ; 
    *ptr *=2;
}

int main()
{
    int value{10};
    int *ptr_value{nullptr};
    
    cout<<"value: "<<value<<endl;
    double_pointer(&value);
    cout<<"value: "<<value<<endl;
    
    cout<<"\n----------------------------------------------"<<endl;
    ptr_value=&value;
    double_pointer(ptr_value);
    cout<<"value: "<<value<<endl;
    
    return 0;
}