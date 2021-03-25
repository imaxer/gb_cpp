/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#include "../include/Card.h"
#include "../include/CardValue.h"

void Card::flip() {
    this->position = !this->position;
}

int Card::getValue() {
    switch (this->value) {
        case CardValue::TWO:
            return 2;
        case CardValue::THREE:
            return 3;
        case CardValue::FOUR:
            return 4;
        case CardValue::FIFE:
            return 5;
        case CardValue::SIX:
            return 6;
        case CardValue::SEVEN:
            return 7;
        case CardValue::EIGHT:
            return 8;
        case CardValue::NINE:
            return 9;
        case CardValue::TEN:
        case CardValue::JACK:
        case CardValue::QUEEN:
        case CardValue::KING:
            return 10;
        case CardValue::ELEVEN:
            return 11;
        case CardValue::ACE:
            return 1;
        default:
            return 0;
    }
}
