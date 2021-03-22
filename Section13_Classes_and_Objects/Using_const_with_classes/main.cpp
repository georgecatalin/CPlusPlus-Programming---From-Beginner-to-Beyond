//USING CONST IN CLASSES

#include <iostream>

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
    string get_name() const //with this mention of const i guarantee this is not altering any attributes of the object ::any method that does not modify members should be const
    {
        return name;
    }
    
    set_name(string name_val)
    {
        name=name_val;
    }
    
    //Overloaded Constructors
    Player();
    Player(string name_val);
    Player(string name_val, int health, int xp);
    
    //Destructor
    ~Player();
};

Player::Player()
    : Player {"None",0,0}
{
    
}

Player::Player(string name_val)
    :Player{name_val,0,0}
    {
        
    }

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val},health{health_val},xp {xp_val} 
    {
        
    }


void display_player_name(const Player &p)   //a reference p to a const Player object
{
    cout<<p.get_name()<<endl;
}

Player::~Player()
{
    
}

int main()
{
    const Player villain{ "George",100,42}; //this means I can not change any of the Villain attributes
    Player alexey{"Alex", 87,29};
    
    display_player_name(villain);
    display_player_name(alexey);
    
    return 0;
}