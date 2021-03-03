#include <iostream>
#include <climits> //climits provides sizeof information for integers, whilst cfloat provides sizeof information for floats

using namespace std;

int main()
{
    cout<<"sizeof information"<<endl;
    cout<<"=================================================================="<<endl;
    
    
    cout<<"char: "<<sizeof(char)<<" bytes."<<endl;
    cout<<"int: "<<sizeof(int)<<" bytes."<<endl;
    cout<<"unsigned int: "<<sizeof(unsigned int)<<" bytes."<<endl;
    cout<<"short: "<<sizeof(short)<<" bytes."<<endl;
    cout<<"long: "<<sizeof(long)<<" bytes."<<endl;
    cout<<"long long:"<<sizeof(long long)<<" bytes."<<endl;
    
    cout<<"==============================="<<endl;
    cout<<"float: "<<sizeof(float)<<" bytes."<<endl;
    cout<<"double: "<<sizeof(double)<<" bytes."<<endl;
    cout<<"long double: "<<sizeof(long double)<<" bytes."<<endl;
    
    // use values defined in <climits> MINs and MAXs
    
    cout<<"============================================="<<endl;
    cout<<"char: "<<CHAR_MIN<<"    "<<CHAR_MAX<<endl;
    cout<<"int: "<<INT_MIN<<"    "<<INT_MAX<<endl;
    cout<<"short: "<<SHRT_MIN<<"    "<<SHRT_MAX<<endl;
    cout<<"long: "<<LONG_MIN<<"    "<<LONG_MAX<<endl;
    cout<<"long long"<<LLONG_MIN<<"    "<<LLONG_MAX<<endl;
    
    // use sizeof with variable names
    
    cout<<"============================================="<<endl;
    int age{42};
    cout<<"age variable is: "<<sizeof(age)<<" bytes."<<endl;
    cout<<"age variable is: "<<sizeof age<<" bytes."<<endl;
    
    double wage{9.5};
    cout<<"wage variable is: "<<sizeof(wage)<<" bytes."<<endl;
    cout<<"wage variable is: "<<sizeof wage<<" bytes."<<endl;
    
    return 0;
}