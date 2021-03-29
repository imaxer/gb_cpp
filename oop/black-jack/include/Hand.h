/*
 * Created by Maksim Paramonov on 29.03.2021.
*/

#ifndef CPP_HAND_H
#define CPP_HAND_H

#include <vector>

#include "Card.h"

class Hand {
private:
    std::vector<Card*> *cards;

public:
    Hand();
    Hand(const Hand &hand);
    virtual ~Hand();

    void add(Card *card);

    void clear();

    [[nodiscard]] int getValue() const;
};


#endif //CPP_HAND_H
