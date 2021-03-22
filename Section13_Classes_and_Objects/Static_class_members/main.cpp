#include <iostream>
#include "Player.h"

using namespace std;


void display_number_players()
{
    cout<<"The number of players is: "<<Player::get_number_players()<<endl;
}

int main(int argc, char **argv)
{
	display_number_players();
    
    Player george("George");
    display_number_players();
    
    {
        Player kornel("Kornel");
        display_number_players();  //object kornel will get out of the scope as the {} block ends and gets deleted automatically because it happens on the stack
    }
    
     display_number_players();
     
     Player *ninja=new Player("Ninja", 100, 35);
     display_number_players();
     delete ninja;
     
      display_number_players();
}
