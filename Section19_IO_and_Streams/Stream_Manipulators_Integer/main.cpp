//STREAM MANIPULATORS INTEGER

#include <iostream>
#include <iomanip>

int main()
{
    int number{255};
    
    std::cout<<"\n-------------------------------------------------------------"<<std::endl;
    std::cout<<std::dec<<number<<std::endl;
    std::cout<<std::hex<<number<<std::endl;
    std::cout<<std::oct<<number<<std::endl;
    
    
    //using stream manipulator to show the base
    std::cout<<"\n--------------------------------------------------------------"<<std::endl;
    std::cout<<std::showbase<<std::dec<<number<<std::endl;
    std::cout<<std::showbase<<std::hex<<number<<std::endl;
    std::cout<<std::showbase<<std::oct<<number<<std::endl;
    
    //using stream manipulator to show in uppercase
    std::cout<<"\n-----------------------------------------------------------"<<std::endl;
    std::cout<<std::uppercase;
    std::cout<<std::dec<<number<<std::endl;
    std::cout<<std::hex<<number<<std::endl;
    std::cout<<std::oct<<number<<std::endl;
    
    //using stream manipulator to show + aign for positive values
    std::cout<<"\n-------------------------------------------------------------"<<std::endl;
    std::cout<<std::showpos;
    std::cout<<std::dec<<number<<std::endl;
    std::cout<<std::hex<<number<<std::endl;
    std::cout<<std::oct<<number<<std::endl;
    
    //using stream member methods to apply formatting
    std::cout<<"\n-----------------------------------------------------------"<<std::endl;
    std::cout.setf(std::ios::showbase);
    std::cout<<std::dec<<number<<std::endl;
    std::cout.setf(std::ios::uppercase);
    std::cout<<std::hex<<number<<std::endl;
    std::cout.setf(std::ios::showpos);
    std::cout<<std::oct<<number<<std::endl;
    
    //resetting the defaults with stream member manipulator
    std::cout<<std::resetiosflags(std::ios::basefield);
    std::cout<<std::resetiosflags(std::ios::showbase); //resets to the default stream manipulator for the property 'showbase'
    std::cout<<std::resetiosflags(std::ios::uppercase);
    std::cout<<std::resetiosflags(std::ios::showpos); //resets to the default stream manipulator for the property 'showpos'
    
    
    return 0;
}