//
//  game.hpp
//  cards
//
//  Created by Alexander Laquitara on 6/5/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#ifndef game_hpp
#define game_hpp

#include <stdio.h>
#include "player.hpp"
#include "deck.hpp"

class Game
{
protected:
    Player* player1;
    Player* player2;
    std::string gameName;
public:
    Game();
    Game(std::string, std::string);
    virtual void runGame()=0;
    virtual void deal()=0;
    
};

class War : public Game
{
public:
    War();
    War(std::string, std::string);
    void runGame();
    void deal();
};

#endif /* game_hpp */
