#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string,string);
void print(vector<string>);

void print(int number)
{
    cout<<"The int number is "<<number<<endl;
}

void print(double number)
{
    cout<<"The double is "<<number<<endl;
}


void print(string s)
{
    cout<<"The string is "<<s<<endl;
}

void print(string s, string t)
{
    cout<<"The strings are "<<s<<" and "<<t<<endl;
}

void print(vector<string> v)
{
    for(string s : v)
    {
        cout<<s<<endl;
    }
    
    cout<<endl;
}

int main()
{
    print(100); //1st overloard
    print('A'); //char is promoted to int and the ASCII value behind is printed, not the character
    
    print(100.3); //2nd overload
    
    print("C Style String Literal"); // C Style String is promoted to C++ string //3rd overload is called
    
    string s {"This is C++ style string object"};
    print(s); //3rd overload is called
    
    print("C Style string",s); //4th overload is called
    
    vector<string> cars {"Dacia","Renault","Lada"};
    print(cars); //5th overload is called
    
    return 0;
}