//
//  game.cpp
//  cards
//
//  Created by Alexander Laquitara on 6/5/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#include "game.hpp"

Game::Game()
{

    player1->setName("player 1");
    player2->setName("player 2");
    gameName = "";
    
}

Game::Game(std::string name1, std::string name2)
{
    player1->setName(name1);
    player2->setName(name2);
    gameName = "";
}

War::War()
{
    player1->setName("player 1");
    player2->setName("player 2");
    gameName = "War";
}

War::War(std::string name1, std::string name2)
{
    player1->setName(name1);
    player2->setName(name2);
    gameName = "War";
}

void War::runGame()
{
    
}

void War::deal()
{
    Deck* deck = new Deck();
    deck->shuffle();
    
    for(int i = 0; i<52; i+=2)
    {
        for(int j=1; i<52; i+=2)
        {
            player1->addCard(deck->cards[i]);
            player2->addCard(deck->cards[j]);
            
        }
    }
}



