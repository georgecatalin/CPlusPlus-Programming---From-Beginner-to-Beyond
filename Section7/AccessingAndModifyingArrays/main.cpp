#include <iostream>

using namespace std;

int main()
{
    char vowels[] {'a','i','e','u','o'};
    
    cout<<"\nThe first element of the array is: "<<vowels[0]<<endl;
    cout<<"The second element of the array is: "<<vowels[1]<<endl;
    
    double hi_temperatures[] {99.4,98.4,100.3,102.6};
    cout<<"\nThe first high temperature is : "<<hi_temperatures[0]<<endl;
    
    hi_temperatures[0]=105.3;
    cout<<"The first high temperature is now: "<<hi_temperatures[0]<<endl;
    
    int my_array[5] {42};
    
    cout<<"\nThe element at position 0 of the array is: "<<my_array[0]<<endl;
    cout<<"\nThe element at position 1 of the array is: "<<my_array[1]<<endl;
    cout<<"\nThe element at position 2 of the array is: "<<my_array[2]<<endl;
    cout<<"\nThe element at position 3 of the array is: "<<my_array[3]<<endl;
    cout<<"\nThe element at position 4 of the array is: "<<my_array[4]<<endl;
  
    cout<<"\nEnter the scores in order: "<<endl;
    cin>>my_array[0];
    cin>>my_array[1];
    cin>>my_array[2];
    cin>>my_array[3];
    cin>>my_array[4];
    
    cout<<"The values of the updated array are:"<<endl;
    cout<<"Element at position 0 is : "<<my_array[0]<<endl;
    cout<<"Element at position 1 is : "<<my_array[1]<<endl;
    cout<<"Element at position 2 is : "<<my_array[2]<<endl;
    cout<<"Element at position 3 is : "<<my_array[3]<<endl;
    cout<<"Element at position 4 is : "<<my_array[4]<<endl;
    
    cout<<endl;
    cout<<"The value of the array is the memory address of the location where the array starts from: "<<my_array<<endl;
    
    
    return 0;
}