//STREAM MANIPULATORS FLOATING POINT

#include <iostream>
#include <iomanip>

int main()
{
    double number1=123456789.987654321;
    double number2=1234.5678;
    double number3=1234.0;
    
    
    std::cout<<"\n---------------------------- Defaults ----------------------------------"<<std::endl;
    std::cout<<number1<<std::endl; //the default precision is 6 and no trailing zeros. It will be displayed with scientific notation
    std::cout<<number2<<std::endl; //1234.56  due to the precision 6, so 6 digits starting from left side
    std::cout<<number3<<std::endl; //1234 because by default the settings is without trailing 0s , so no 1234.00 
    
    //set the precision 2. Since the numbers are too big to be displayed with precision to 2, then they will be displayed with scientific notation. So, two digits departing from left side
    std::cout<<"\n------------------------------ Setting the precision to 2 ---------------------------------"<<std::endl;
    std::cout<<std::setprecision(2); //used stream manipulator to set the precision of the double
    std::cout<<number1<<std::endl;
    std::cout<<number2<<std::endl;
    std::cout<<number3<<std::endl;
    
    //set the precision to 5
    std::cout<<"\n------------------------------  Setting the precision to 5 -------------------------------"<<std::endl;
    std::cout<<std::setprecision(5);
    std::cout<<number1<<std::endl; //number1 can not be displayed with a precision of 5, hence it will be displayed in scientific notation with a precision of 5 (5 digits from lefthand side)
    std::cout<<number2<<std::endl;//1234.6 there will be 5 digits from left hand side, and the last one will be rounded
    std::cout<<number3<<std::endl;//1234, there will be no trailing zeroes since the setting by default is without trailing zeroes
    
    //set the precision to 9
     std::cout<<"\n------------------------------  Setting the precision to 9 -------------------------------"<<std::endl;
     std::cout<<std::setprecision(9); 
     std::cout<<number1<<std::endl; // 123456789.987654321 -> 123456790 because it is displayed with 9 digits from the right, but it is rounded 
     std::cout<<number2<<std::endl; // 1234.5678 ->1234.5678 is displayed entirely because precision 9 allows sufficient room for all digits
     std::cout<<number3<<std::endl; // 1234.0 -> 1234 because there are no trailing zeroes
    
    //set the precision to 3 and fix the decimal point -> there will be 3 digits after the decimal point
    std::cout<<"\n------------------------------  Setting the precision to 3 and fix the decimal point  -------------------------------"<<std::endl;
    std::cout<<std::setprecision(3)<<std::fixed;
    std::cout<<number1<<std::endl; // 123456789.987654321 -> 123456789.988 rounded the last decimal
    std::cout<<number2<<std::endl; // 1234.5678 -> 1234.568
    std::cout<<number3<<std::endl; // 1234.0;->1234.000 there are three zeroes because the decimal point is set fixed now
    
    //set precision to 3 and scientific notation
    std::cout<<"\n------------------------------  Setting the precision to 3 and scientific notation  -------------------------------"<<std::endl;
    std::cout<<std::setprecision(3)<<std::scientific;
    std::cout<<number1<<std::endl; //std::fixed persists from the previous settings so there will 3 digits after the decimal in scientific notation
    std::cout<<number2<<std::endl; //same
    std::cout<<number3<<std::endl; //same
    
    //set precision to 3 and scientific notation and uppercase
    std::cout<<"\n------------------------------  Setting the precision to 3 and scientific notation  and uppercase -------------------------------"<<std::endl;
    std::cout<<std::setprecision(3)<<std::scientific<<std::uppercase;
    std::cout<<number1<<std::endl;
    std::cout<<number2<<std::endl;
    std::cout<<number3<<std::endl;
    
    //set precision to 3 and fixed and showpos
    std::cout<<"\n------------------------------  Setting the precision to 3 and fixed  and uppercase -------------------------------"<<std::endl;
    std::cout<<std::fixed<<std::showpos;
    std::cout<<number1<<std::endl;
    std::cout<<number2<<std::endl;
    std::cout<<number3<<std::endl;
    
    //reset with member method
    std::cout<<"\n------------------------------  reset with unsetf -------------------------------"<<std::endl;
    std::cout.unsetf(std::ios::fixed | std::ios::showpos);
    std::cout<<number1<<std::endl;
    std::cout<<number2<<std::endl;
    std::cout<<number3<<std::endl;
    
    //reset with stream manipulator
    std::cout<<"\n------------------------------  reset with std::resetiosflags -------------------------------"<<std::endl;
    std::cout<<std::resetiosflags(std::ios::showpos);
    std::cout<<number1<<std::endl;
    std::cout<<number2<<std::endl;
    std::cout<<number3<<std::endl;
    
    
    return 0;
}