//THE DEFAULT CONSTRUCTORS IN C++

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
    void set_name(string name_val);
    string get_name();
    
    Player();
    Player(string name_val, int health_val, int xp_val);
    
    ~Player();
};

void Player::set_name(string name_val)
{
    name=name_val;
}

string Player::get_name()
{
    return name;
}

Player::Player()
{
    name="No name";
    health=96;
    xp=42;
}

 
Player::Player(string name_val,int health_val,int xp_val)
{
    name=name_val;
    health=health_val;
    xp=xp_val;
}



Player::~Player()
{
    
}

int main()
{
    Player george;
    cout<<"The  constructor has been used with object "<<george.get_name()<<endl;
    
    //When there is any constructor specified C++ no longer provides a default constructor
    
    Player alex("Alex",200,28);
     cout<<"The  constructor has been used with object "<<alex.get_name()<<endl;
    
    
    return 0;
}