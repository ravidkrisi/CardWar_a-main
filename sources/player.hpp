#pragma once 

#include <string>

namespace ariel
{
    class Player 
    {
        private:
            // define attributes 
            string name; //Player's name 
            // stack <Card> cardStack; // Player's stack of cards
        
        public:
            //decalare constructor deconstructor 
            Player(); // defaltive constructor 
            Player(string name); 
            ~Player();
            // declare functions  
            int stacksize(); // this method returns the amount of cards left
            int cardesTaken(); // this method print the amount of cards the Player has won
    };

    // define constructor 
    Player::Player(string name)
    {
        this->name = name; 
    }
}

