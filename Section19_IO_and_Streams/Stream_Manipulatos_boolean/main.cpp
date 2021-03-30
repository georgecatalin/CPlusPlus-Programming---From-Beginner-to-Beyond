//STREAM MANIPULATORS BOOLEAN

#include <iostream>
#include <iomanip>

int main()
{
    std::cout<<"noboolalpha (10=10) : "<<(10==10)<<std::endl;
    std::cout<<"noboolalpha (10==20) : "<<(10==20)<<std::endl;
    
    std::cout<<std::boolalpha;  //member manipulator to set format of the boolean stream
    std::cout<<"\nboolalpha (10==10) : "<<(10==10)<<std::endl;
    std::cout<<"boolalpha (10==20) : "<<(10==20)<<std::endl;
    
    //the stream formatting options set by the member manipulator remains the same , until changed
    
    std::cout<<"\nboolalpha (10==10) : "<<(10==10)<<std::endl;
    std::cout<<"boolalpha (10==20) : "<<(10==20)<<std::endl;
    
    std::cout<<std::noboolalpha;
    std::cout<<"\nnoboolalpha (10==10) : "<<(10==10)<<std::endl;
    std::cout<<"noboolalpha (10==20) : "<<(10==20)<<std::endl;
    
    //setting the formatting through members method
    std::cout.setf(std::ios::boolalpha);
    std::cout<<"\nboolalpha (10==10) : "<<(10==10)<<std::endl;
    std::cout<<"boolalpha (10==20) : "<<(10==20)<<std::endl;
    
    
    std::cout<<std::resetiosflags(std::ios::boolalpha);
    std::cout<<"\nreset flags (10==10) : "<<(10==10)<<std::endl;
    std::cout<<"reset flags (10==20) : "<<(10==20)<<std::endl;
    return 0;
}