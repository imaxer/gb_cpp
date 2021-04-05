/*
 * Created by Maksim Paramonov on 05.04.2021.
*/

#ifndef CPP_HOUSE_H
#define CPP_HOUSE_H

#include <string>

#include "GenericPlayer.h"

class House : public GenericPlayer {
public:
    House() : GenericPlayer("house") {};
    House(const House &house) = default;
    House(House &&house) = default;
    ~House() override = default;

    bool isHitting() override;

    void flipFirstCard();
};


#endif //CPP_HOUSE_H
