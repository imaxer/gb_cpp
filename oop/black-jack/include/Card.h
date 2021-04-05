/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_CARD_H
#define CPP_CARD_H

#include "Suit.h"
#include "Rank.h"

#include <iostream>

class Card {
private:
    Suit suit;
    Rank rank;
    bool position;
public:
    Card(Suit suit, Rank rank, bool position = false) : suit(suit), rank(rank), position(position) {};
    Card(const Card &card) = default;

    [[nodiscard]] Suit getSuit() const;

    [[nodiscard]] Rank getRank() const;

    [[nodiscard]] bool getPosition() const;

    void flip();

    [[nodiscard]] int getValue() const;

    friend std::ostream &operator<< (std::ostream &ostream, const Card &card);
};


#endif //CPP_CARD_H
