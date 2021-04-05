/*
 * Created by Maksim Paramonov on 05.04.2021.
*/

#include "../include/House.h"

bool House::isHitting() {
    return getValue() <= 16;
}

void House::flipFirstCard() {
    for (auto &card : *cards) {
        if (!card->getPosition()) {
            card->flip();
            break;
        }
    }
}
