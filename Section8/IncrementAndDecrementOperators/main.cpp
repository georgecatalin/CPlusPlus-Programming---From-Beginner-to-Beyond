#include <iostream>

using namespace std;

int main()
{
    int counter {10};
    int result {0};
    
    //using a simple incrementation
//    
//    cout<<"Counter is: "<<counter<<endl;
//    
//    counter=counter+1;
//    cout<<"Counter is: "<<counter<<endl;
//    
//    counter++;
//    cout<<"Counter is: "<<counter<<endl;
//    
//    ++counter;
//    cout<<"Counter is: "<<counter<<endl;

     //Example of PRE-INCREMENT
//     counter=10;
//     result=0;
//     
//     cout<<"Counter is: "<<counter<<endl; //10
//     
//     result=++counter; //prefix- is done before the =
//     
//     cout<<"Counter is: "<<counter<<endl; //11
//     cout<<"Result is: "<<result<<endl; //11;
     
    //Example of POST-INCREMENT
//    counter=10;
//    result=0;
//    
//    cout<<"Counter is : "<<counter<<endl; //10;
//    
//    result=counter++;
//    cout<<"Counter is: "<<counter<<endl; //11
//    cout<<"Result is: "<<result<<endl; //10;

    //Example Combined
//    counter=10;
//    result=0;
//    
//    cout<<"Counter is: "<<counter<<endl; //10
//    result=++counter+10; 
//    /*
//     * counter=counter+1
//     * result=counter+10
//     * */
//     
//     cout<<"Counter is: "<<counter<<endl;  //11
//     cout<<"Result is: "<<result<<endl;    //21

    //Example combined
    counter=10;
    result=0;
    
    cout<<"Counter is: "<<endl; //10;
    
    result=counter++ +10;
    /*
     * result=counter+10
     * counter=counter+1
     * */
     
     cout<<"Counter is: "<<counter<<endl; //11
     cout<<"Result is: "<<result<<endl; //20
    
    return 0;
}