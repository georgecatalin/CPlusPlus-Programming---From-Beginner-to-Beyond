#include <iostream>

using namespace std;

int main()
{
    int my_score{10};
    double my_temperature{37.5};
    
    int *ptr;
    ptr=nullptr;
    
    ptr=&my_score; //pointer points to my_score
    //ptr=& my_temperature; //compiler error because ptr should be pointing to a double
    
    
    
    return 0;
}