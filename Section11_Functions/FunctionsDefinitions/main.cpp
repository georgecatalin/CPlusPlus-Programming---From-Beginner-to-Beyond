#include <iostream>


using namespace std;

const double pi=3.14159;

double calculate_aria_circle(double radius)
{
    return pi*radius*radius;
}

void area_circle()
{
    double radius {};
    
    cout<<"\nEnter the radius of the circle : ";
    cin>>radius;
    
    cout<<"\nThe area of a circle that has the radius of "<<radius<<" is : "<<calculate_aria_circle(radius)<<endl;
    
}

double calculate_volume_cylinder(double radius, double height)
{
    return calculate_aria_circle(radius)*height;
}

void volume_cylinder()
{
    double radius {};
    double height {};
    
    cout<<"\nEnter the radius of the cylinder: ";
    cin>>radius;
    
    cout<<"\nEnter the height of the cylinder: ";
    cin>>height;
    
    cout<<"\nThe Volume of the cylinder with a radius of "<<radius<<" and a height of "<<height<<" is "<<calculate_volume_cylinder(radius,height)<<endl;
}

int main()
{
    area_circle();
    volume_cylinder();
    
    return 0;
}