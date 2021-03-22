#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>


class Player
{
private:
    std::string name;
    int health;
    int xp;
    
    static int number_players;
    
public:
    std::string get_name() { return name; }
    int get_health(){  return health;}
    int get_xp() {return xp;}
    
    Player(std::string name_val,int health_val=0, int xp_val=0);
    Player(const Player &source);
    ~Player();
    
    static int get_number_players();

};

#endif // _PLAYER_H_
