//THE COPY CONSTRUCTOR

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
    string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;} 
    
    //Default constructors
    Player(string name_val="None",int health_val=100, int xp_val=42);
    
    //Copy constructor: it is used when passing the object as a value in a function, when returning the object from a function and when making a copy from an object into another object
    Player(const Player &source);
    
    //Destructor
    ~Player()
    {
        cout<<"Destructor for the object "+ name + " has been called."<<endl;
    }
    
};

Player::Player(string name_val, int health_val, int xp_val)
 : name{name_val} ,health{health_val} , xp{xp_val} //with list initialization
 {
     cout<<"Constructor for the object "+ name+" has been called "<<endl;
 }

Player::Player(const Player &source)
    //: name {source.name}, health{source.health}, xp{source.xp}
    : Player{source.name,source.health,source.xp}
    {
        cout<<"The copy constructor  is being appealed for " + get_name()<<endl;
      
    }


void display_player(Player p)
{
      cout<<"Name: "<<p.get_name()<<endl;
      cout<<"Health: "<<p.get_health()<<endl;
      cout<<"Xp: "<<p.get_xp()<<endl;
}

int main()
{
    Player xtreme_player{"Ninja",100,42};
    Player new_player{xtreme_player};
    
    
    Player noname;
    
    display_player(noname);
    
    return 0;
}