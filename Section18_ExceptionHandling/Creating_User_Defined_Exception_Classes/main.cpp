//CREATING USER DEFINED EXCEPTION CLASSES

/*

Exception Handling
-One can create user defined Exception classes and instantiate it

Best practices:
-throw an object, and not a primitive type
-throw an object by value
-catch an object by reference or const reference

*/

#include <iostream>

class DivideByZero
{
    
};

class NegativeNumbers
{
    
};

double return_average(int miles, int gallons)
{
    if(gallons==0)
        throw DivideByZero();
        
    if(miles<0 || gallons<0)
        throw NegativeNumbers();
        
    return static_cast<double>(miles)/gallons;
}

int main()
{
   int miles{};
   int gallons{};
   double miles_per_gallon{};
   
   std::cout<<"Enter the miles:";
   std::cin>>miles;
   
   std::cout<<"Enter the gallons:";
   std::cin>>gallons;
   
   try
   {
       miles_per_gallon=return_average(miles,gallons);
       std::cout<<"Result:"<<miles_per_gallon<<std::endl;
   }
   catch(const DivideByZero &ex)
   {
       std::cerr<<"Exception called Division By Zero"<<std::endl;
   }
   catch(const NegativeNumbers &ex)
   {
       std::cerr<<"Exception called Negative Numbers"<<std::endl;
   }
    
    std::cout<<"Program ends here. Bye!"<<std::endl;
    
    return 0;
}