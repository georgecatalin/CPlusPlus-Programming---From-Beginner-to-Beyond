#include <iostream>

using namespace std;

void global_example();
void local_example();
void static_local_example();

int number {100};

void global_example()
{
    cout<<"\nThe value of the global variable number at start is :"<<number<<endl;
    number *=2;
    cout<<"The value of the global variable 'number'at end is :"<<number<<endl;
}

void local_example(int x)
{
    int number {1000};
    cout<<"\nLocal number is : "<<number<<" at start."<<endl;
    number=x;
    cout<<"Local number is: "<<number<<" at end."<<endl;
}

void static_local_example()
{
    static int number {500}; //this kind of variable has a local span, but it retains its value between function calls
    
    cout<<"\nThe local static variable 'number' is : "<<number<<" at start."<<endl;
    number +=1000;
    cout<<"The local static variable 'number' is : "<<number<<" at end."<<endl;
}

int main()
{
    int number {100}; //this is local to the main() function block
    int number1 {300}; //this is local to the main() function block
    
    cout<<"Local number is : "<<number<<endl; //100
    
    { //brackets create a new level of scope
        int number {42};
        cout<<"Local number is : "<<number<<endl; //42
        cout<<"The inner block can see in the outer level block: "<<number1<<endl; //300
    }
    
    cout<<"Local number is : "<<number<<endl; //100
    
    local_example(9); //to display 1000 and 9
    local_example(15); //1000, then 15
    
    global_example(); // prints out 100, 200
    global_example(); // prints out 200, 400. 'number' does not get initialized again. It got initialized only once, before the execution of main() function
    global_example(); // prints out 400, 800. 'number' does not get initialized again. It got initialized only once, before the execution of main() function
    
    
    static_local_example(); // initializes 'number' to 50. Prints out 50, 1500
    static_local_example(); // it does not initialize 'number'again. Instead it retains its value and goes from there. Prints out 1500, 2500
    static_local_example(); // it does not initialize 'number'again. Prints out 2500, 3500
    
    return 0;
}