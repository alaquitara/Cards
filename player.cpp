//
//  player.cpp
//  cards
//
//  Created by Alexander Laquitara on 6/5/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#include "player.hpp"
Player::Player()
{
    this->score= 0;
    this->name = "default";
}

Player::Player(std::string name)
{
    this->score = 0;
    this->name = name;
}

void Player::setName(std::string name)
{
    this->name = name;
}
void Player::addCard(Card* card)
{
    cards.push_back(card);
}

void Player::removeCard(int idx)
{
    
    for (int i =idx; i<cards.size(); i++)
    {
        cards[i] = cards[i+1];
    }
    
}

std::string Player::printHand()
{
    std::vector<Card*>::iterator current;
    const std::vector<Card*>::iterator end = this->cards.end();
    std::string res ="";
    
    for(current = this->cards.begin(); current <end; current++)
    {
        res+=(**current).printCard() +"\n";
    }
    return res;
}
