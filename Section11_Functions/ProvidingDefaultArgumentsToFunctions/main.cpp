#include <iostream>
#include <iomanip>

using namespace std;

double calc_cost(double base_cost=200,double tax_rate=0.06, double shipping=3.50);

void greeting(string name, string prefix="Mr.", string suffix=" ");

double calc_cost(double base_cost,double tax_rate, double shipping)
{
    return base_cost += (base_cost*tax_rate)+shipping;
}

void greeting(string name, string prefix, string suffix)
{
    cout<<"Hello, " +prefix+ " "+ name + " "+suffix<<endl;
}

int main()
{
    double cost{0};
    
    cout<<fixed<<setprecision(2);
    cost=calc_cost(100,0.08,4.5); //I am specifying all the arguments
    cout<<"Cost is: "<<cost<<endl;
    
    cost=calc_cost(100,0.8); // the arguments are (100,0.8,3.50=default);
    cout<<"Cost is: "<<cost<<endl;
    
    cost=calc_cost(100); // it takes the two defaults , all the arguments are 100,0.06=default, shipping=3.50
    cout<<"Cost is: "<<cost<<endl;
       
    cost=calc_cost(); // it takes all the defaults , all the arguments are 200=default ,0.06=default, shipping=3.50
    cout<<"Cost is: "<<cost<<endl;
       
    greeting("George","Dr.","Phd");
    greeting("Alexey");
    greeting("Ionut", "Kracker");
    
    
    return 0;
}