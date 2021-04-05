/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#include "../include/Card.h"
#include "../include/Rank.h"

void Card::flip() {
    this->position = !this->position;
}

int Card::getValue() const {
    switch (this->rank) {
        case Rank::TWO:
            return 2;
        case Rank::THREE:
            return 3;
        case Rank::FOUR:
            return 4;
        case Rank::FIFE:
            return 5;
        case Rank::SIX:
            return 6;
        case Rank::SEVEN:
            return 7;
        case Rank::EIGHT:
            return 8;
        case Rank::NINE:
            return 9;
        case Rank::TEN:
        case Rank::JACK:
        case Rank::QUEEN:
        case Rank::KING:
            return 10;
        case Rank::ELEVEN:
            return 11;
        case Rank::ACE:
            return 1;
        default:
            return 0;
    }
}

Rank Card::getRank() const{
    return this->rank;
}

Suit Card::getSuit() const{
    return this->suit;
}

bool Card::getPosition() const {
    return this->position;
}

std::ostream &operator<< (std::ostream &ostream, const Card &card) {
    if (card.getPosition()) {
        ostream << "{ Suit: " << card.getSuit() << ", Rank: " << card.getRank() << " }" << std::endl;
    } else {
        ostream << "{ XX }" << std::endl;
    }
    return ostream;
}
