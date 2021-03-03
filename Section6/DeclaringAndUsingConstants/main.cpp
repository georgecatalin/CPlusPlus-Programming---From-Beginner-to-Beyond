#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello, Welcome to Frank's Carpet Cleaning Service"<< endl<<endl;
    cout<<"How many rooms would you like cleaned?"<<endl;
    
    int number_of_rooms{0};
    cin>>number_of_rooms;
    
    const double price_per_room {30.0};
    const double tax_rate {0.06};
    const int days_expiry {30};
    
    
    cout<<"\nEstimate for carpet cleaning service"<<endl;
    cout<<"Number of Rooms: "<<number_of_rooms<<endl;
    cout<<"Price per Room: $"<<price_per_room<<endl;
    
    cout<<"Cost $: "<<price_per_room* number_of_rooms<<endl;
    cout<<"Tax $: "<<price_per_room* number_of_rooms* tax_rate<<endl;
    cout<<"========================================================================"<<endl;
    
    cout<<"Total estimate: $"<<price_per_room*number_of_rooms*(1+tax_rate)<<endl;
    cout<<"This estimate is valid for "<<days_expiry<<" days."<<endl;
    
    
    cout<<endl;
    return 0;
}