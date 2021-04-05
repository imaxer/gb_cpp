/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_RANK_H
#define CPP_RANK_H

#include <iostream>

enum Rank {
    TWO,
    THREE,
    FOUR,
    FIFE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    ELEVEN,
    JACK,
    QUEEN,
    KING,
    ACE
};

inline std::ostream &operator<< (std::ostream &ostream, const Rank &rank) {
    switch (rank) {
        case Rank::TWO:
            ostream << "TWO";
            break;
        case Rank::THREE:
            ostream << "THREE";
            break;
        case Rank::FOUR:
            ostream << "FOUR";
            break;
        case Rank::FIFE:
            ostream << "FIFE";
            break;
        case Rank::SIX:
            ostream << "SIX";
            break;
        case Rank::SEVEN:
            ostream << "SEVEN";
            break;
        case Rank::EIGHT:
            ostream << "EIGHT";
            break;
        case Rank::NINE:
            ostream << "NINE";
            break;
        case Rank::TEN:
            ostream << "TEN";
            break;
        case Rank::ELEVEN:
            ostream << "ELEVEN";
            break;
        case Rank::JACK:
            ostream << "JACK";
            break;
        case Rank::QUEEN:
            ostream << "QUEEN";
            break;
        case Rank::KING:
            ostream << "KING";
            break;
        case Rank::ACE:
            ostream << "ACE";
            break;
        default:
            break;
    }
    return ostream;
}

#endif //CPP_RANK_H
