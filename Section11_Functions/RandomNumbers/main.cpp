#include <iostream>
#include <cstdlib> //need this to generate random numbers
#include <ctime> //need this to seed the numbera

using namespace std;

int main()
{
    int random_number {};
    size_t count {10}; //number of random numbers to generate
    int min {1};
    int max {6};
    
    cout<<"The RAND_MAX on this system is: "<<RAND_MAX<<endl;
    srand(time(nullptr)); //Seed the random generator, otherwise you will get the same random sequence each generation
    
    for(size_t i{1};i<count;++i)
    {
        random_number=rand() % max +min; //generate the random number between min and max
        cout<<"The generated random number is: "<<random_number<<endl;
    }
    

    return 0;
}