#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display_team(const vector<string> *v);
void display_team(int *array, int sentinel);

void display_team(const vector<string>  * const v)
{
    //(*v).at(2)="Elvis"; //this gets a compile error with (const vector<string> *v) because the value at the address where the pointer is pointing should not change
    
    for(auto myString : *v) //v pointer is dereferenced so *v=the collection at that address
    {
        cout<<myString<<endl;
    }
    
   //v=nullptr; //this gets a compile error with (const vector<string>  * const v) due to *const v because this set the pointer to be a constant
}

void display_team(int *array, int sentinel)
{
    while( *array!=-1)
    {
        cout<<*array++<<endl; //printsout the dereferenced pointer which is the value it points to and increments afterwards the pointer with 1 int size to get to the next element of the array
    }
}


int main()
{
    cout<<"\n-------------------------------------------------------"<<endl;
    vector<string> team{"George", "Cornel", "Alexey"};
    display_team(&team);
    
    cout<<"\n -------------------------------------------------------"<<endl;
    int scores[] {100,98,88,78,-1};
    display_team(scores, -1);
    
    return 0;
}