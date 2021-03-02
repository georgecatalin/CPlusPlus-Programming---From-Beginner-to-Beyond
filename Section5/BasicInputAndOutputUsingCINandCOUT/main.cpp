#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello World!"<<endl;
    
    cout<<"Hello";
    cout<<"World"<<endl;
    
    cout<<"Hello World!"<<endl;
    cout<<"Hello"<<" World!"<<endl;
    cout<<"Hello"<<" World!\n";
    cout<<"Hello\nOut\nWorld!\n";
    
    int num1;
    int num2;
    double num3;
    
//    
//    cout<<"Enter an integer number"<<endl;
//    cin>>num1;
//    cout<<"You entered the number: "<<num1<<endl;

    // cin reads all the input at once, it is not waiting to press two times ENTER so 100 200 is taken num1=100 and num2=200
/*    
 * cout<<"Enter the first integer: ";
    cin>>num1;
    cout<<"Enter the second integer: ";
    cin>>num2;
    
    cout<<"You entered: "<<num1<<" and "<<num2<<"\n";*/
    
    //chaining extraction operators
//    cout<<"Enter two integers separated by a space: ";
//    cin>>num1>>num2;
//    cout<<"You entered: "<<num1<<" and "<<num2<<endl;
  
//    cout<<"Enter a double: "<<endl;
//    cin>>num3;
//    cout<<"You entered "<<num3<<endl;

    cout<<"Enter an integer:"<<endl;
    cin>>num1;
    
    cout<<"Enter a double: "<<endl;
    cin>>num3;
    
    cout<<"You entered this integer :"<<num1<<" and this double:  "<<num3<<endl;
    
    return 0;
}