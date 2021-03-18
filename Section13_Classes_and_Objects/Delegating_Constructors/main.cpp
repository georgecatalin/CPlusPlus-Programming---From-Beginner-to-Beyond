#include <iostream>
#include <string>

using namespace std;

class Player
{
    //attribuytes
private:
    string name;
    int health;
    int xp;
    
    //methods
    //Delegating Constructors
public:
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
    
    ~Player(); 
};

Player::Player()
    : Player{"None", 0,0} 
    {
        cout<<"No-args constructor appealed here."<<endl;
    }

Player::Player(string name_val)
    : Player{name_val,0,0}
    {
        cout<<"One-args constructor appealed here."<<endl;
    }

Player::Player(string name_val,int health_val, int xp_val)
    : name{name_val},health{health_val},xp{xp_val}
    {
        cout<<"Three-args constructor appealed here."<<endl;
    }

Player::~Player()
{
    cout<<"Destructor called here"<<endl;
}

int main()
{
    Player noname;
    Player frank("Frank");
    Player george("George", 100,42);
    
    return 0;
}