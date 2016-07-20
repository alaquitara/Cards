//
//  deck.hpp
//  cards
//
//  Created by Alexander Laquitara on 6/4/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#ifndef deck_hpp
#define deck_hpp
#include "card.hpp"
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

class Deck{
private:
    std::vector<Card*>cards;

public:
    
    Deck();
    ~Deck();
    //Card getCard();
    //Card pushCard();
    std::string printDeck(void);
    void shuffle(void);
    void removeCard(Card*);
    void addCard(Card*);

    
};



#endif /* deck_hpp */
