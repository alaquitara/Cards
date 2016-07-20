//
//  main.cpp
//  cards
//
//  Created by Alexander Laquitara on 6/4/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#include <iostream>
#include "deck.hpp"

int main(int argc, const char * argv[]) {
    Deck* deck = new Deck();
    std::cout<<deck->printDeck()<<std::endl;
    deck->shuffle();
    std::cout<<deck->printDeck()<<std::endl;
    //std::cout<<"the last card is: "<<deck->getCard()<<std::endl;
    return 0;
}
