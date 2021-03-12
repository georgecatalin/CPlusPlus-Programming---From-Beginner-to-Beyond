#include <iostream>
#include <string>
#include <vector>

using namespace std;


void swap(int *a, int *b);

void swap(int *a, int *b)
{
    int temporary=*a;
    *a=*b;
    *b=temporary;
}


int main()
{
    int x{9},y{42};
    cout<<"\nx="<<x<<endl;
    cout<<"y="<<y<<endl;
    
    swap(&x,&y);
    
    cout<<"\n-------------------------------------------------"<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    
    return 0;
}