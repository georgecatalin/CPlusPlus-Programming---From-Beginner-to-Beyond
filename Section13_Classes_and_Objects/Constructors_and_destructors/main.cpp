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
    //The Constructors are a special type of member methods which get called when creating objects. They can be overloaded and they have not return type
    //If course, constructors have the member access modifier as public so that they can be accessed from out of the class they are defined into, otherwise the class would have no longer sense, since object could not be constructed out of it
public:
    Player();
    Player(string name, int health, int xp);
    Player(string name);
    
    void set_name(string new_name);
    
    //The destructor is a special type of member function that gets called automatically by the program when the object gets out of scope because the block where it is included ends(in case of objects running on the stack from functions) or objects lose their reference to them(for objects instantiated on the heap)
    ~Player();
};


Player::Player()
{
    cout<<"The constructor without arguments has been called. For this object "<<name<<endl;
}

Player::Player(string name, int health, int xp)
{
    cout<<"The constructor with three arguments has been called. For this new object "<<name<<endl;
}

Player::Player(string name)
{
    cout<<"The constructor with a single argument has been called. For this object "<<name<<endl;
}

Player::~Player()
{
    cout<<"The destructor for the object "<<name<<" has been called."<<endl;
}

void Player::set_name(string new_name)
{
    name=new_name;
}

int main()
{
    {
        Player george;
        george.set_name("George");
        //when this block ends the {} the object george gets out of scope on the stack, hence the destructor is automatically called
    }
    
    {
        Player cornel("Cornel",100,4);
        cornel.set_name("Kronel");
        
        Player alex("Alexey");
        
        //the order in which the objects get out of scope is vice-versa to that in which they were  constructed. So firstly is destroyed 'alex', then 'cornel'
    }
    
    Player *fucker=new Player;
    fucker->set_name("Desperado");
    delete fucker;
    
    
    Player *mega=new Player;
    mega->set_name("Coco");
    
   
    delete mega; //the destructor is called because the object on the heap loses the link to the pointer on the stack
     
    
    
    return 0;
}