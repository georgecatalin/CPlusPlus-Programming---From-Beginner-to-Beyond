#include <iostream>

using namespace std;

int main()
{
    int total{}; //initializes total to 0
    int num1 {},num2 {}, num3 {};
    const int counter{3};
    double average {0.0};
    
    cout<<"Enter three integer numbers separated by a comma: ";
    cin>>num1>>num2>>num3;
    
    cout<<"The numbers you entered are: "<<num1<<" , "<<num2<<" , "<<num3<<endl;
    total=num1+num2+num3;
    cout<<"The total is: "<<total<<endl;
    average=static_cast<double>(total)/counter;
    //average= (double) total/counter; //old style C cast
    cout<<"The average is: "<<average<<endl;
    
    
    
    cout<<endl;
    return 0;
}