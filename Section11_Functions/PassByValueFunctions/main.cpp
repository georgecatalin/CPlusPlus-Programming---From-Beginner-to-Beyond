#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value_1(int num);
void pass_by_value_2(string s);
void pass_by_value_3(vector<string> v);
void print_vector(vector<string> v);


void pass_by_value_1(int num)
{
    num=1000;
}

void pass_by_value_2(string s)
{
    s="This is changed!";
}

void pass_by_value_3(vector<string> v)
{
    v.clear();
}

void print_vector(vector<string> v)
{
    for(auto s :v)
    {
        cout<<s<<endl;
    }
    
    cout<<endl;
}

int main()
{
    int num {10};
    cout<<"The value of num before appealing the function 'pass_by_value_1' is "<<num<<endl;
    pass_by_value_1(num); //a copy of the value is passed to the function, with a different address in memory , not the actual variable
    cout<<"The value of num after appealing the function 'pass_by_value_1' is "<<num<<endl;
    
    int another_number {20};
    cout<<"The value of another_number before appealing the function 'pass_by_value_1' is "<<another_number<<endl;
    pass_by_value_1(num); //a copy of the value is passed to the function, with a different address in memory , not the actual variable
    cout<<"The value of another_number after appealing the function 'pass_by_value_1' is "<<another_number<<endl;
    
    string name{"George"};
    cout<<"The value of name before appealing the function 'pass_by_value_2' is "<<name<<endl;
    pass_by_value_1(num); //a copy of the value is passed to the function, with a different address in memory , not the actual variable
    cout<<"The value of name after appealing the function 'pass_by_value_2' is "<<name<<endl;
    
    vector<string> squad {"Cornel","Ionut", "Alexey"};
    cout<<"\nThe vector before appealing the function 'pass_by_value_3' is "<<endl;
    print_vector(squad);
    cout<<"\nThe vector after appealing the function 'pass_by_value_3' is "<<endl;
    print_vector(squad);
    
    return 0;
}