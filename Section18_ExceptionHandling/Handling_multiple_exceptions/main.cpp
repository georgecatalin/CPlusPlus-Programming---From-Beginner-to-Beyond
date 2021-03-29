//HANDLING MULTIPLE EXCEPTIONS

#include <iostream>
#include <string>

double return_average(int miles, int gallons)
{
    if(gallons==0)
        throw 0;
        
    if(miles<0 || gallons<0)
        throw std::string{"Negative input. Can not be!"} ;
        
    return static_cast<double> (miles)/gallons;
}



int main()
{
    int miles{};
    int gallons{};
    double miles_per_gallons{};
    
    std::cout<<"Enter miles:";
    std::cin>>miles;
    
    std::cout<<"Enter gallons:";
    std::cin>>gallons;
    
    try
    {
        miles_per_gallons=return_average(miles, gallons);
        std::cout<<"Result:"<<miles_per_gallons<<std::endl;
    }
    catch(int &ex)
    {
        std::cerr<<"Division by zero. No way, bastard!"<<std::endl;
    }
    catch(std::string &ex)
    {
        std::cerr<<ex<<std::endl;
    }
    catch(...)
    {
        //this block catches all remaining exceptions
    }
    
    std::cout<<"Program ends here.Bye!"<<std::endl;
    
    return 0;
}