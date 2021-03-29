//STACK UNWINDING AND HOW IT WORKS

/*

Stack unwinding

If an exception is thrown, but not caught in the current scope, then C++ tries to find a handler for that exception by unwinding the stack.

- function in which the exception was called , but was not handled terminates and is removed from the call stack
- if a try block was used, then the catch are checked for a match
- if no try block is used or the catch does not handle the thrown error, then the call stack does unwinding again
- if the stack is unwound to the main() function and no catch handler is found , then the program terminates

*/

#include <iostream>

void func_b();
void func_c();

void func_a()
{
    std::cout<<"Started function a"<<std::endl;
    func_b();
    std::cout<<"Finished function a"<<std::endl;
}

void func_b()
{
    std::cout<<"Started function b"<<std::endl;
    try
    {
         func_c();
    }
    catch(int &ex)
    {
         std::cerr<<"Exception caught in func_b"<<std::endl;
    }
    std::cout<<"Finished function b"<<std::endl;
}

void func_c()
{
    std::cout<<"Started function c"<<std::endl;
    throw 100;
    std::cout<<"Finished function c"<<std::endl;
}

int main()
{
    std::cout<<"Started main function."<<std::endl;
    try
    {
          func_a();
    }
    catch(int &ex)
    {
        std::cerr<<"Exception caught in main"<<std::endl;
    }
  
    std::cout<<"Finished main function."<<std::endl;
   
    return 0;
}