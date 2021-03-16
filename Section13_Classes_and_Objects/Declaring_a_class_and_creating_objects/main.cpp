//Declare Classes and Objects

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Player
{
    //attributes
    string name;
    int health;
    int xp;
    
    //methods
    void talk(string);
    bool is_dead();
};


class Account
{
    //attributes
    string name{"George"};
    double amount{10.0};
    
    //methods
    bool deposit(double);
    bool withdraw(double);
};

int main()
{
    Player george;
    Player mara;
    
    //create an array of Player objects
    Player array_player[] {george,mara};
    
    //create a vector of Player objects
    vector<Player> vector_player{george};
    vector_player.push_back(mara);
    
    Account george_account;
    Account mara_account;
    
    
    //Create a pointer to a Player on the stack that allocates dynamically memory on the Heap (Free Store)
    Player *enemy{nullptr};
    enemy=new Player;                  
    
    delete enemy;  //delete the dynamically accessed memory on the heap when it is no longer in use
    
    return 0;
}