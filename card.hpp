//
//  card.hpp
//  cards
//
//  Created by Alexander Laquitara on 6/4/16.
//  Copyright © 2016 Alexander Laquitara. All rights reserved.
//

#ifndef card_hpp
#define card_hpp

#include <stdio.h>
#include <string>

enum Suit{diamonds =0, hearts, spades, clubs};
enum Color {black =0, red};
enum Value {one = 0, two, three, four, five, six, seven, eight, nine, ten, J, Q, K, A};

class Card
{
    Suit suit;
    Value value;
    Color color;
    int position;
    
    public:
    Card(Suit suit, Value value);
    std::string printCard(void);
};
    
#endif /* card_hpp */
