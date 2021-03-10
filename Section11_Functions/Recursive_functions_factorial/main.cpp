//RECURSIVE FUNCTION WITH C++
// An example with factorial

#include <iostream>

using namespace std;

unsigned long long calculate_factorial(unsigned long long number);

unsigned long long calculate_factorial(unsigned long long number)
{
  unsigned long long result;

  if(number==0)
  {
      return 1;
  }
    
   result=number*calculate_factorial(number-1);
   return result;
    
}


int main()
{
    cout<<calculate_factorial(10)<<endl;
    cout<<calculate_factorial(15)<<endl;
    cout<<calculate_factorial(34)<<endl;
    
    return 0;
}