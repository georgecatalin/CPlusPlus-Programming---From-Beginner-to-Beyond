#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int score {100};
    int *ptr_score{&score};
    
    cout<<"The value of variable score is : "<<score<<endl;   //100
    cout<<"The value obtained by dereferencing the ptr_score is : "<<*ptr_score<<endl; //100
    
    *ptr_score=200; //this sets the value at the address where ptr_score is pointing to 200 
    cout<<"The value of *ptr_score is : "<<*ptr_score<<endl; //200
    cout<<"The value of score is : "<<score<<endl; //200
    
    cout<<"\n-------------------------------"<<endl;
    
    double high_temperature {100.2};
    double low_temperature {37.7};
    
    double *ptr_temp(&high_temperature);
    
    cout<<"*ptr_temp is : "<<*ptr_temp<<endl; //100.2
    cout<<"high_temperature is : "<<high_temperature<<endl;

    ptr_temp=&low_temperature; //mind the type correspondence ptr_temp should be pointing to a double, low_temperature has the double type, it is ok
    
    cout<<"*ptr_temp is : "<<*ptr_temp<<endl; //37.7
    
    
    cout<<"\n-------------------------------------------"<<endl;
    
    string name {"George"};
    string *ptr_name {&name};
     
    cout<<*ptr_name<<endl; //if one needs to see what is behind the pointer, then one has to follow the pointer, thus dereferencing it //"George" is at that memory address
    
    name="Calin";
    cout<<*ptr_name<<endl; //since the value at that memory address which is pointed by the pointer changed , then by following the pointer one gets the new address //"Calin"
    
    
    cout<<"\n-----------------------------------------------"<<endl;
    vector<string> squad {"George","Alex", "Kornel"};
    vector<string> *ptr_squad{nullptr};
    
    ptr_squad=&squad; //this sets the pointer to point out to the memory address of the vector
    
    cout<<"The first member of the gang is : "<< (*ptr_squad).at(0)<<endl;  //*ptr_squad dereferences and follows the pointer to the value behind that address which is the actual vector. we use () to mark the order of operations, cause otherwise the . would have had priority over *
    
    cout<<"These are all the members of the squad: "<<endl;
    for (auto member : *ptr_squad)
    {
        cout<<member<<endl;
    }
    cout<<endl;
    
    return 0;
}