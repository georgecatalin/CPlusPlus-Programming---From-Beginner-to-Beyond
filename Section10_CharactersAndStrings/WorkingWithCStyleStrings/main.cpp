#include <iostream>
#include <cctype> //we plan to use test and conversion functions on c type strings
#include <cstring> //we plan to use string manipulations on c type strings

using namespace std;

int main()
{
    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temporary[50] {};
    
    //cout<<first_name; //since first_name is uninitialized, we will see here garbage
    
//    cout<<"Enter your first name: ";
//    cin>>first_name;
//    
//    cout<<"Enter your last name: ";
//    cin>>last_name;
//    cout<<"-----------------------------"<<endl;
//    
//    cout<<"Hello, "<<first_name<<" your first name has "<<strlen(first_name)<<" characters."<<endl;
//    cout<<"And your last name, "<<last_name<<" has "<<strlen(last_name)<<" characters."<<endl;
//    
//    strcpy(full_name,first_name);
//    strcat(full_name," ");
//    strcat(full_name,last_name);
//    
//    cout<<"Hello, your full name is "<<full_name<<endl;
    
    
//    cout<<"-----------------------------------"<<endl;
//    cout<<"Enter your full name: ";
//    cin>>full_name;
//    cout<<"Your full name is: "<<full_name<<endl;

     cout<<"----------------------------------"<<endl;
     cout<<"Enter your full name here: ";
     cin.getline(full_name,50); //cin will read 50 characters or until you press the ENTER button
     cout<<"Your full name is: "<<full_name<<endl;
   
    cout<<"---------------------------------------------"<<endl;
    
    strcpy(temporary,full_name);
    if(strcmp(temporary,full_name)==0)
    {
        cout<< temporary<< " and "<<full_name<<" are the same"<<endl;
    }
    else   
    {
        cout<<temporary<<" and "<<full_name<< "are not the same "<<endl;
    }

    cout<<"-------------------------------------------------------------"<<endl;
    
    
    
    for(size_t i{0};i<strlen(full_name);++i)
    {
        if(isalpha(full_name[i]))
        {
            full_name[i]=toupper(full_name[i]);
        }
    }
    
    cout<<"The full name is now : "<<full_name<<endl;
    
    cout<<"--------------------------------------"<<endl;
    if(strcmp(temporary,full_name)==0)
    {
        cout<<temporary<<" and "<<full_name<<" are the same"<<endl;
    }
    else
    {
        cout<<temporary<<" and "<<full_name<<" are not the same"<<endl;
    }
 
    cout<<"---------------------------------------------------------------"<<endl;
    
    cout<<"The result of the comparison between "<<temporary<<" and "<<full_name<<" is "<<strcmp(temporary,full_name)<<endl;
    cout<<"The results of the comparison between "<<full_name<<" and "<<temporary<<" is "<<strcmp(full_name,temporary)<<endl;
    
    /* **************************
     * negative	if the ASCII value of the first unmatched character is less than the second.
     * positive integer	if the ASCII value of the first unmatched character is greater than the second.
     * ************* */
   
}