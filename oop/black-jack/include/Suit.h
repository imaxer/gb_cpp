/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_SUIT_H
#define CPP_SUIT_H

#include <iostream>

enum Suit {
    CLUB,
    HEART,
    SPADE,
    DIAMOND
};

inline std::ostream &operator<< (std::ostream &ostream, const Suit &suit) {
    switch (suit) {
        case Suit::SPADE:
            ostream << "SPADE";
            break;
        case Suit::HEART:
            ostream << "HEART";
            break;
        case Suit::DIAMOND:
            ostream << "DIAMOND";
            break;
        case Suit::CLUB:
            ostream << "CLUB";
            break;
        default:
            break;
    }
    return ostream;
}

#endif //CPP_SUIT_H
