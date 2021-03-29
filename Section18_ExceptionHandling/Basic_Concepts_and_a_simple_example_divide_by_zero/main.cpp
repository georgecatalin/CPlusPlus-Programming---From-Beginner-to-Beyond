//BASIC CONCEPTS AND DIVIDE BY ZERO EXAMPLE

/*

Basic Concepts

Exception handling
-dealing with extraordinary situations
-indicates that an extraordinary situation has been detected or has occurred
-programs can deal with extraordinary situations in a suitable manner

What causes exceptions:
-insufficient resources
-missing resources
-invalid operations
-range violations
-underflows and overflows
-illegal data and many others

Exception safe
-when the code handles exceptions

TERMINOLOGY

Exception:
-an object or primitive type that signals that an error condition has occurred

Throwing an exception (raising an exception):
-your code detects that an error has occurred or will occur
-the place where the error will occur will not know how to handle the error
-code can throw an exception describing the error to another part of the program that knows how to handle the error

Catching an exception(handle the exception):
-code that handles the exception
-may or may not cause the program to terminate

*/

#include <iostream>

int main()
{
   int kilometers;
   int liters;
   double kilometers_by_liters; 
    
   std::cout<<"Enter the kilometers: ";
   std::cin>>kilometers;
   
   std::cout<<"Enter the liters:";
   std::cin>>liters;
   
  
   
   
   
   try
   {
       if(liters==0)
       {
           throw 0;
       }
       
       //kilometers_by_liters=kilometers/liters;  //both are integers, division between integers therefore
       
       kilometers_by_liters=static_cast<double>(kilometers)/liters; //kilometers_by_liters=static_cast<double>(kilometers)/liters;
       std::cout<<"Result: "<<kilometers_by_liters<<std::endl;
   }
   catch(int &ex)
   {
       std::cerr<<"Warning :: Division by Zero!"<<std::endl;
   }
    
    return 0;
}