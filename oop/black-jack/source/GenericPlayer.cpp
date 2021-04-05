/*
 * Created by Maksim Paramonov on 29.03.2021.
*/

#include "../include/GenericPlayer.h"

#include <iostream>

std::string GenericPlayer::getName() const {
    return this->name;
}

bool GenericPlayer::isBoosted() const {
    return this->getValue() > 21;
}

void GenericPlayer::bust() const {
    std::cout << "Player " << this->getName() << ". Bust!!!" << std::endl;
}

std::ostream &operator<<(std::ostream &ostream, const GenericPlayer &genericPlayer) {
    ostream << "Player: " << genericPlayer.getName() << std::endl;
    ostream << "Cards: " << std::endl;
    for (auto &card : *genericPlayer.cards) {
        ostream << "\t" << *card << " ";
    }
    ostream << std::endl;
    ostream << "Summary: " << genericPlayer.getValue() << std::endl;
    return ostream;
}
