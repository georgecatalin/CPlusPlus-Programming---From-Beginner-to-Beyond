#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
    int number {42};
    
    cout<<"The value of number is: "<<number<<endl;
    cout<<"The sizeof number is : "<<sizeof number<<endl;
    cout<<"The memory address of number is : "<<&number<<endl;
    
    int *ptr; //defined a pointer pointing to anywhere :: this is a dangerous issue cause it could point out to a valuable are in memory where something useful is stored
    cout<<"\nThe pointer is a variable, and its value is anywhere (garbage) because it was not initialized : "<<ptr<<endl;
    cout<<"The sizeof of pointer ptr is : "<<sizeof ptr<<endl;
    cout<<"As it is a variable, the pointer itself is stored at a certain memory address. This address is : "<<&ptr<<endl;
    
    ptr=nullptr; //initialized the ptr pointer to null
    cout<<"The value of the pointer after setting it to nullptr is : "<<ptr<<endl;
    
    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector<string> *p4{nullptr};
    string *p5{nullptr};
    
    cout<<"\nSizeof p1 is : "<<sizeof p1<<endl;
    cout<<"Sizeof p2 is : "<<sizeof p2<<endl;
    cout<<"Sizeof p3 is : "<<sizeof p3<<endl;
    cout<<"Sizeof p4 is : "<<sizeof p4<<endl;
    cout<<"Sizeof p5 is : "<<sizeof p5<<endl;
    
    int my_age{42};
    double my_height{1.78};
    
    int *p; //declared a pointer, but did not uninitialize it. It points out to anywhere
    p=nullptr; //set it to nullptr
    
    p=&my_age;
    
    cout<<"The value of my_age is : "<<my_age<<endl;
    cout<<"The address of my_age is : "<<&my_age<<endl;
    cout<<"The value of the ptr is : "<<p<<endl;
    
    //ptr=&my_height ; //gets into compiler error as the type pointing to is not int, but double
    
    return 0;
}