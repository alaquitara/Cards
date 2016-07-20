//
//  deck.cpp
//  cards
//
//  Created by Alexander Laquitara on 6/4/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#include "deck.hpp"
Deck::Deck()
{
    for(int i=0; i<=clubs; i++)
    {
        for(int j = 0; j<=A; j++)
        {
            this->cards.push_back(new Card((Suit)i,(Value)j));
        }
    }
}

Deck::~Deck()
{
    std::vector<Card*>::iterator current;
    const std::vector<Card*>::iterator end = this->cards.end();
    
    for(current = this->cards.begin();current < end; current++)
    {
        delete *current;
    }
}

void Deck::shuffle(void)
{
    std::random_shuffle(cards.begin(), cards.end());
}

std::string Deck::printDeck(void)
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

void removeCard(Card* card)
{
   
    
}

/*Card Deck::getCard()
{
    Card* outcard = cards.back();
    
    return *outcard;
}*/