#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
#include "doctest.h"

using namespace ariel;

TEST_CASE("test demo functions")
{
    CHECK_NOTHROW(Player()); // check if no exception thrown when create anonymous player 
    CHECK_NOTHROW(Player("rosalia")); // check if no exception thrown when creating player 

    // create players 
    Player player_1("Rosalia");
    Player player_2("motomami");
    
    // check players stacks before game 
    CHECK(player_1.stacksize() == 0); // check if p1 has no cards before starting game
    CHECK(player_2.stacksize() == 0); // check if p2 has no cards before starting game

    CHECK(player_1.cardesTaken() == 0); // check if p1 has no cards taken before starting game
    CHECK(player_2.cardesTaken() == 0); // check if p2 has no cards taken before starting game

    // create new game
    CHECK_THROWS(Game(player_1, player_1)); // check if exception thrown when starting game with the same player 
    Game first_game(player_1, player_2);

    //check players stack when game created
    CHECK(player_1.stacksize() == 26); // check if p1 has 26 cards when game starts
    CHECK(player_2.stacksize() == 26); // check if p2 has 26 cards when game starts

    CHECK(player_1.cardesTaken() == 0); // check if p1 has no cards taken when game starts
    CHECK(player_2.cardesTaken() == 0); // check if p2 has no cards taken when game starts

    //check players stack when play first turn 
    CHECK_NOTHROW(first_game.playTurn()); // check if playturn function throws no exception 

    CHECK(player_1.stacksize() < 26); // check if p1 has less than 26 cards after first turn
    CHECK(player_2.stacksize() < 26); // check if p1 has less than 26 cards after first turn
    bool or_bool = (player_1.cardesTaken() > 0 || player_2.cardesTaken()); // set bool
    CHECK(or_bool == true); // check if p1 or p2 has win and took cards 
    CHECK(player_1.cardesTaken()+player_1.stacksize()+player_2.cardesTaken()+player_2.stacksize() == 52); // check if all stacks size is 52

    //check players stack when play all cards
    CHECK_NOTHROW(first_game.playAll()); // check if playAll function is valid and throws no exception 

    CHECK(player_1.stacksize() == 0); // check if p1 has no cards after playing all cards
    CHECK(player_2.stacksize() == 0); // check if p2 has no cards after playing all cards

    or_bool = (player_1.cardesTaken() > 0 || player_2.cardesTaken()); // set bool
    CHECK(or_bool == true); // check if p1 or p2 has win and took cards 
    
    CHECK(player_1.cardesTaken()+player_1.stacksize()+player_2.cardesTaken()+player_2.stacksize() == 52); // check if all stacks size is 52
}