#include <iostream>


using namespace std;

void print_array(const int array[],size_t size); //set it to const so to not to be able to modify the array since we pass the array name which is the memory address of the first element of the array
void set_array(int array[],size_t size, int value);

void print_array(const int array[], size_t size)
{
    for (size_t i {0};i<size;++i)
    {
        cout<<array[i]<<endl;
    }
    
    // array[0]=239;  //By placing const in the function definition at the parameter, one gets a compiler error when trying to modify the value of the array, thus safeguarding the array
    cout<<endl;
}

void set_array(int array[],size_t size, int value)
{
    for (size_t i {0}; i<size; ++i)
    {
        array[i]=value;
    }
}


int main()
{
    int my_scores[] {100,98,99,97,88};
    
    print_array(my_scores,5);
    set_array(my_scores,5,200);
    print_array(my_scores,5);
    
    return 0;
}