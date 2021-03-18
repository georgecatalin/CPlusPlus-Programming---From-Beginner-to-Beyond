//DEFAULT CONSTRUCTOR PARAMETERS

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
    Player(string name_val="None",int health_val=0, int xp_val=0);
    
    ~Player();
    
};


Player::Player(string name_val,int health_val,int xp_val)
: name{name_val} ,health {health_val}, xp{xp_val}
{
    cout<<"Three-args constructor is called here."<<endl;
}

Player::~Player()
{
    cout<<"Object destructor called here."<<endl;
}


int main()
{
    Player noname;
    Player Cornel("Cornel");
    Player Alex("Alex",100);
    Player George("George",100,42);
    
    return 0;
}