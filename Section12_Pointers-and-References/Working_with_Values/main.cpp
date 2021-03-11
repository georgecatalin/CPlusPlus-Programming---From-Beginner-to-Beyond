#include <iostream>

using namespace std;

int main()
{
    int variable{42};
    
    cout<<"The value of the variable is : "<<variable<<endl;
    cout<<"The size of the variable is : "<<sizeof variable<<endl;
    cout<<"The memory address where is stored the variable is: "<<&variable<<endl;
    
    return 0;
}