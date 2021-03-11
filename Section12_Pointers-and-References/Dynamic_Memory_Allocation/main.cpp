//DYNAMIC MEMORY ALLOCATION
#include <iostream>


using namespace std;


int main()
{
    //aLLocate a single element of the heap (integer) and point to it using a pointer
    int *ptr_int{nullptr};
     
     ptr_int=new int; //a new integer is allocated on the heap/free storage part of the memory
     cout<<"The memory address of the integer allocated on the heap is: "<<ptr_int<<endl;
     cout<<"The value allocated on the heap dynamically is (garbage because it was not set) : "<<*ptr_int<<endl;
     delete ptr_int; //this way the memory allocation on the heap is freed, there no connection with that anymore
     cout<<"\n------------------------------------------------------------------------"<<endl;
     cout<<"After deleting the pointer (freeing the memory allocated on the heap"<<endl;
     cout<<"The memory address of the integer allocated on the heap is: "<<ptr_int<<endl;
     cout<<"The value allocated on the heap dynamically is (garbage because it was not set) : "<<*ptr_int<<endl;
     
     //allocate dynamically an array
     double *ptr_temperatures{nullptr};
     size_t size{0};
     
     cout<<"Enter the size you wish for the dynamically allocated array on the heap: ";
     cin>>size;
     
     ptr_temperatures=new double[size];
     
     cout<<ptr_temperatures<<endl; //the address on the heap of the first array element
     delete [] ptr_temperatures; //release the memory on the heap because this is not automatically handled , opposite to the stack where the functions are called
    
    return 0;
}