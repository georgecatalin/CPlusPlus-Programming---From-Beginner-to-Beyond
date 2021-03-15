//HOW TO USE REFERENCES IN RANGE BASED FOR LOOPS

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num{100};
    int &ref{num};
    
    cout<<num<<endl;
    cout<<ref<<endl;
    cout<<&num<<endl;
    
    cout<<"\n----------------------------------------------------------"<<endl;    
    num=200;
    cout<<num<<endl;
    cout<<ref<<endl; //ref is an alias of the variable num , so it retains the value of the num. if num is changed, ref is the alias for the new value
    
    
    cout<<"\n----------------------------------------------------------"<<endl;   
    num=500;
    cout<<num<<endl;
    cout<<ref<<endl;

    cout<<"\n----------------------------------------------------------"<<endl;   
    vector<string> squad {"George", "Kornel","Alexey"};
    
    for (auto str: squad) // a copy of each string is created , not the actual strings are accessed
    {
        str="Gonzo";
    }
    
    for (auto str: squad)
    {
        cout<<str<<endl;
    }

    
    cout<<"\n----------------------------------------------------------"<<endl;  
    for(auto &reference : squad)   //an alias of the actual string component of the vector is passed so not a copy
    {
        reference="Gonzo";
    } 
    
    for(auto const &refs: squad)
    {
        cout<<refs<<endl;
    }
    
    cout<<"\n----------------------------------------------------------"<<endl;  
    cout<<"A reference for a pointer"<<endl<<endl;  
    int *ptr{&num};
    //int &ref_ptr{ptr} //this is the reference of the pointer , so to say the alias of the pointer
    
    cout<<ptr<<endl;
    //cout<<ref_ptr<<endl;
    
    return 0;
}