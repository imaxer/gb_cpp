/*
 * Created by Maksim Paramonov on 29.03.2021.
*/

#include "../include/Hand.h"

Hand::Hand() {
    cards = new std::vector<Card*>();
}

Hand::Hand(const Hand &hand) {
    cards = new std::vector<Card*>();
    for (auto &card : *hand.cards) {
        cards->push_back(card);
    }
}

Hand::~Hand() {
    delete cards;
}

void Hand::add(Card *card) {
    cards->push_back(card);
}

void Hand::clear() {
    cards->clear();
}

int Hand::getValue() const {
    int sum = 0;
    for (auto &card : *cards) {
        // у туза — 1 или 11 (11 пока общая сумма не больше 21, далее 1)
        if (sum <= 21 && card->getRank() == Rank::ACE) {
            sum += 11;
        } else {
            sum += card->getValue();
        }
    }
    return sum;
}
