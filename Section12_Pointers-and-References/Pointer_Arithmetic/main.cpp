//POINTER ARITHMETIC

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int scores[] {100,99,97,-1};
    int *ptr_scores(scores);
    
    cout<<scores<<endl;
    
    while(*ptr_scores!=-1)
    {
        cout<<*ptr_scores<<endl;
        ptr_scores++;
    }
    cout<<"\n------------------------------------------------------------"<<endl;
    
    ptr_scores=scores;
    while(*ptr_scores!=-1)  //-1 is called a sentinel value
    {
        cout<<*ptr_scores++<<endl;       //*ptr_scores++ use the pointer,then increment it
    }
    
    cout<<"\n--------------------------------------------------------------------"<<endl;
    //compare pointers
    string s1="George";
    string s2="George";
    string s3="Calin";
    
    string *ptr_s1{&s1};
    string *ptr_s2{&s2};
    string *ptr_s3{&s1};
    
    cout<<boolalpha;
    cout<<ptr_s1<<" == "<<ptr_s2<<" "<<(ptr_s1==ptr_s2)<<endl;
    cout<<ptr_s1<<" == "<<ptr_s3<<" "<<(ptr_s1==ptr_s3)<<endl;
    
    cout<<"\n------------------------------------------------------"<<endl;
    cout<<*ptr_s1<<" == "<<*ptr_s2<<" "<<(*ptr_s1==*ptr_s2)<<endl;
    cout<<*ptr_s1<<" == "<<*ptr_s3<<" "<<(*ptr_s1==*ptr_s3)<<endl;
    
    cout<<"\n------------------------------------------------------"<<endl;
    ptr_s3=&s3;
    cout<<*ptr_s1<<" == "<<*ptr_s3<<" "<<(*ptr_s1==*ptr_s3)<<endl;
    
    cout<<"\n---------------------------------------------------------"<<endl;
    char name[] {"MaraBibba"};
    
    char *ptr_c0{&name[0]}; //same as name  'M'
    char *ptr_c5{&name[5]}; //'B'
    
    cout<<"In the word "<<name<<" the difference of characters between "<<*ptr_c0<<" and "<<*ptr_c5<<" is "<<ptr_c5-ptr_c0<<endl; //pointers point to the same type , so no error returned
    cout<<name<<endl;
    
    
    return 0;
}