//THE RELATIONSHIP BETWEEN ARRAYS AND POINTERS
#include <iostream>

using namespace std;


int main()
{
    int scores[] {100,99,97};
    
    cout<<"Value of scores is : "<<scores<<endl; //100 //the name of an array is the memory address of the first element in the array
    
    
    int *ptr_scores{scores};
    cout<<"Value of ptr_scores is : "<<ptr_scores<<endl; //ptr_scores holds the address of the first element of an array
    
    cout<<"\nArray subscript notation ----------------------------------------------"<<endl;
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores[2]<<endl;
    
    cout<<"\nPointer subscript notation ----------------------------------------------"<<endl;
    cout<<ptr_scores[0]<<endl; //as the pointer points to the address of the first element in the array, array name and pointer name are replace-able
    cout<<ptr_scores[1]<<endl;
    cout<<ptr_scores[2]<<endl;
    
    cout<<"\nPointer offset notation -------------------------------------------------"<<endl;
    cout<<*ptr_scores<<endl;
    cout<<*(ptr_scores+1)<<endl;
    cout<<*(ptr_scores+2)<<endl;
    
    cout<<"\nArray offset notation ---------------------------------------------------"<<endl;
    cout<<*scores<<endl; //as the pointer and the array name are replace-able, dereferencing can be applied to both
    cout<<*(scores+1)<<endl;
    cout<<*(scores+2)<<endl;
    
    cout<<endl;
    
    return 0;
}