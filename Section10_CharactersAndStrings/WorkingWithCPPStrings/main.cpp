#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1}; //Apple
    
    string s6 {s1,0,3}; //App
    
    string s7 (5,'X'); //"XXXXX"
    
//    cout<<s0<<endl; //here is no garbage, the string object was initialized
//    cout<<s0.length()<<endl; //will show 0 since it contains no character
//    
//    
//    cout<<"\nInitialization"<<"\n---------------------------------------"<<endl;
//    cout<<"s1 is initialized with : "<<s1<<endl;
//    cout<<"s2 is initialized with : "<<s2<<endl;
//    cout<<"s3 is initialized with : "<<s3<<endl;
//    cout<<"s4 is initialized with : "<<s4<<endl;
//    cout<<"s5 is initialized with : "<<s5<<endl;
//    cout<<"s6 is initialized with : "<<s6<<endl;
//    cout<<"s7 is initialized with : "<<s7<<endl;

     //Comparison
//     cout<<"\nComparison"<<"\n---------------------------------------"<<endl;
//     cout<<boolalpha; //display true and false instead of 1 and 0
//     cout<<s1<<" == "<<s5<<" : "<<(s1==s5)<<endl;
//     cout<<s1<<" == "<<s2<<" : "<<(s1==s2)<<endl;
//     cout<<s1<<" != "<<s2<<" : "<<(s1!=s2)<<endl;
//     cout<<s1<<" < "<<s2<<" : "<<(s1<s2)<<endl;
//     cout<<s2<<" > "<<s1<<" : "<<(s2>s1)<<endl;
//     cout<<s4<<" < "<<s5<<" : "<<(s4<s5)<<endl;
//     cout<<s1<<" == "<<"Apple"<<" : "<<(s1=="Apple")<<endl; //"Apple" is C type string literal

    //Assignment
//    cout<<"\nAssignment"<<"\n-----------------------------------------------"<<endl;
//    
//    s1="Watermelon";
//    cout<<"s1 is now : "<<s1<<endl;
//
//    s2=s1;
//    cout<<"s2 is now : "<<s2<<endl;
//
//    s3="Frank";
//    cout<<"s3 is now : "<<s3<<endl;
//    
//    s3[0]='C';
//    cout<<"s3 change of the first letter to C gets into : "<<s3<<endl; //Crank array subscript like syntax
//    
//    s3.at(0)='P';
//    cout<<"s3 change of the first letter to P gets into : "<<s3<<endl; //Prank vectory like syntax, includes bound checking

    //Concatenation
//    s3="Watermelon";
//    
//    cout<<"\nConcatenation"<<"\n-----------------------------------------------------------------------"<<endl;
//    
//    s3=s5+" and "+ s2 + " juice ";
//    cout<<"s3 is now : "<<s3<<endl;

    //s3= "nice"+ " cold "+ s2 + " juice"; //this is going to get into an error because the compiler does not know about the + concatenation operator for C type string literals

    //for loop
//    cout<<"\nLooping"<<"\n-----------------------------------------------"<<endl;
//    
//    s1="Apple";
//    
//    for(size_t i{0};i<s1.length();++i)
//    {
//        cout<<s1.at(i)<<endl;
//    }
//    cout<<endl;
//    
//    //Range based Loop
//    for (char c: s1)
//    {
//        cout<<c<<endl;
//    }


      //Substring
//      cout<<"\nSubstring"<<"\n---------------------------------------"<<endl;
//      s1="This is Sparta!";
//      
//      cout<<s1.substr(0,4)<<endl;
//      cout<<s1.substr(5,2)<<endl;
//      cout<<s1.substr(8,6)<<endl;
    
     //Erase
//     cout<<"\nErase"<<"\n---------------------------------------------------------------------"<<endl;
//     s1="This is Sparta!";
//     cout<<s1.erase(0,5)<<endl;
//      s1="This is Sparta!";
//     cout<<s1.erase(4,3)<<endl;
//    

    //getline
//    cout<<"\ngetline"<<"\n-----------------------------------"<<endl;
//    
//    string full_name {};
//    
//    cout<<"Enter your full name, Alligator!"<<endl;
//    getline(cin,full_name);
//    cout<<"Your full name is : "<<full_name<<endl;


     //find
     cout<<"\nFind"<<"\n-------------------------------------------------"<<endl;
     
     string secret="The secret word is Cocar.";
     string guess {};
     
     cout<<"Enter your guess word:";
     cin>>guess;
     
     size_t position=secret.find(guess);
     
     if(position!=string::npos)
     {
         cout<<"I found the word "<<guess<<" in the secret phrase and it is at position "<<position<<endl;
     }
     else
     {
         cout<<"No, the word "<<guess<<" does not exist in the secret phrase. You are a wanker!"<<endl; 
     }
     



    return 0;
}