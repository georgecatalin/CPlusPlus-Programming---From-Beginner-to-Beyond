#include <iostream>

using namespace std;


int *create_array(size_t size,int initial_value);
void display_array(const int *const array, int size);

int *create_array(size_t size,int initial_value)
{
    int *new_array{nullptr};
    
    new_array=new int[size]; //this allocates dynamic memory on the heap
    
    for(size_t i=0;i<size;++i)
    {
        *(new_array+i)=initial_value;
    }
    
    return new_array;
}


void display_array(const int *const array, int size)
{
    for(size_t i=0;i<size;++i)
    {
        cout<<array[i]<<" "<<i<<endl;
    }
    
    cout<<endl;
}



int main()
{
    int * my_array{nullptr};
    size_t size;
    int initial_value{};
    
    cout<<"Enter the size of the new array, please."<<endl;
    cin>>size;
    
    cout<<"Enter the initial value, you intend to set in each element."<<endl;
    cin>>initial_value;
    
    my_array=create_array(size, initial_value);
    display_array(my_array,size);
    
    delete[] my_array;
    

    return 0;
}