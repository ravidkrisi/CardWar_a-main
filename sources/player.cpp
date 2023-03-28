#include "player.hpp"

using namespace ariel;

Player::Player()
{
}

Player::Player(string name)
{
    this->name = name;
}

Player::~Player()
{
}

int Player::stacksize()
{
    return 1;
}

int Player::cardesTaken()
{
    return 1;
}

