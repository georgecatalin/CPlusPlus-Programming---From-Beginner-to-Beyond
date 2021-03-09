#include <iostream>
#include <cmath>  //needed to use the MATH functions

using namespace std;

int main()
{
    double number {};
    
    
    cout<<"Enter the desired number:";
    cin>>number;
    
    cout<<"The sqrt of the number "<<number<<" is : "<<sqrt(number)<<endl;
    cout<<"The cubic sqrt of the number "<<number<<" is : "<<cbrt(number)<<endl;
    
    cout<<"The sin() of the number : "<<number<<" is : "<<sin(number)<<endl;
    cout<<"The cos() of the number : "<<number<<" is : "<<cos(number)<<endl;
    
    cout<<"The ceil of the number : "<<number<<" is : "<<ceil(number)<<endl;
    cout<<"The floor of the number : "<<number<<" is : "<<floor(number)<<endl;
    cout<<"The round of the number : "<<number<<" is : "<<round(number)<<endl;
    
    double power {};
    cout<<"\nEnter a number to raise number "<<number<<" to the power "<<endl;
    cin>>power;
    
    cout<<number<<" raised to the power "<<power<<" is : "<<pow(number,power)<<endl;
    
    cout<<endl;
    
    return 0;
}