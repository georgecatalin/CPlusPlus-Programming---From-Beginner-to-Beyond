#include "Player.h"

int Player::number_players {0} ; //initialize the static class member in the .cpp file

Player::Player(std::string name_val, int health_val, int xp_val)
    : name{name_val},health{health_val},xp{xp_val} 
{
    ++number_players;
}

Player::Player(const Player &source)
    :Player{source.name,source.health,source.xp}
{
    
}

Player::~Player()
{
    --number_players;
}

int Player::get_number_players()
{
    return number_players; // a static function can only see static members of the class
}