/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_CARD_H
#define CPP_CARD_H

#include "Suit.h"
#include "CardValue.h"

class Card {
private:
    Suit suit;
    CardValue value;
    bool position;
public:
    Card(Suit suit, CardValue value, bool position = false) : suit(suit), value(value), position(position) {};

    void flip();

    int getValue();
};


#endif //CPP_CARD_H
