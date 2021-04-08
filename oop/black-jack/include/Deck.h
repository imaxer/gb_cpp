/*
 * Created by Maksim Paramonov on 08.04.2021.
*/

#ifndef CPP_DECK_H
#define CPP_DECK_H

#include "Hand.h"
#include "GenericPlayer.h"

#include <iostream>
#include <algorithm>
#include <random>
#include <chrono>

class Deck : public Hand {
public:
    Deck() : Hand() {
        populate();
    };
    Deck(Deck &deck) = default;
    ~Deck() override = default;

    void populate();

    void shuffle();

    void deal(Hand &aHand);

    void addltionalCards (GenericPlayer& aGenerlcPlayer);
};


#endif //CPP_DECK_H
