#include <iostream>
#include <string>

using namespace std;

class Player
{
    //attributes
private:
    string name;
    int health;
    int xp;
    
    //methods
public:
    //Overloaded Constructors
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
    
    //Destructor- there has to be a single one ,otherwise the compiler will not know which destructor to appeal to
    ~Player();
    
};

Player::Player()
    : name{"None"} , health{0}, xp{0}  //the order in which the member attributes are initialized in the one in which they were declared, and not this one 
    {
        cout<<"The object was initialized via constructor  initialization list "<<name<<" health: "<<health<<" xp: "<<xp<<endl;
    }
    
Player::Player(string name_val)
    : name{name_val}, health{0}, xp{0} 
    {
        cout<<"The object was initialized via constructor  initialization list "<<name<<" health: "<<health<<" xp: "<<xp<<endl; 
    }

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp {xp_val} 
    {
         cout<<"The object was initialized via constructor  initialization list "<<name<<" health: "<<health<<" xp: "<<xp<<endl; 
    }

Player:: ~Player()
{
    
}

int main()
{
    Player empty;
    Player george("George");
    Player alex("Alex", 100,28);
    
    return 0;
}