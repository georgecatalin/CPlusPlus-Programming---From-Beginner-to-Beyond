//THROWING AN EXCEPTION FROM A FUNCTION

#include <iostream>


double return_average(int sum, int count)
{
    if(count==0)
        throw 0;
    
    return static_cast<double>(sum)/count;
}

int main()
{
    int kilometers{};
    int liters{};
    
    double kilometers_per_liters{};
    
    std::cout<<"Enter the kilometers:";
    std::cin>>kilometers;
    
    std::cout<<"Enter the liters: ";
    std::cin>>liters;
    
    try
    {
        kilometers_per_liters=return_average(kilometers,liters);
        std::cout<<"Result: "<<kilometers_per_liters<<std::endl;
    }
    catch
    {
        std::cerr<<"Warning,bro!! You are trying division by zero."<<std::endl;
    }
    
    std::cout<<"Program ends here. Bye."<<std::endl;
    
    return 0;
}