//
//  player.hpp
//  cards
//
//  Created by Alexander Laquitara on 6/5/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#ifndef player_hpp
#define player_hpp
#include "deck.hpp"
#include "card.hpp"
#include <stdio.h>
#include <string>
#include <vector>

class Player 
{
protected:
    int score;
    std::string name;
    std::vector<Card*> cards;
public:
    Player();
    Player(std::string);
    void setName(std::string);
    void addCard(Card*);
    void removeCard(int);
    std::string printHand();
    
    
};
#endif /* player_hpp */
