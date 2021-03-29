/*
 * Created by Maksim Paramonov on 29.03.2021.
*/

#ifndef CPP_GENERICPLAYER_H
#define CPP_GENERICPLAYER_H

#include <string>

#include "Hand.h"

class GenericPlayer : public Hand {
private:
    std::string name;

public:
    GenericPlayer(std::string &name) : Hand(), name(name) {};
    GenericPlayer(const GenericPlayer &genericPlayer) : name(genericPlayer.name), Hand(genericPlayer) {};
    virtual ~GenericPlayer() {};

    std::string getName() const;

    bool isBoosted() const;

    void bust() const;

    virtual bool isHitting() = 0;
};


#endif //CPP_GENERICPLAYER_H
