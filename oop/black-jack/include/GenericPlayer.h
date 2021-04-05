/*
 * Created by Maksim Paramonov on 29.03.2021.
*/

#ifndef CPP_GENERICPLAYER_H
#define CPP_GENERICPLAYER_H

#include <string>
#include <iostream>

#include "Hand.h"

class GenericPlayer : public Hand {
private:
    std::string name;

public:
    explicit GenericPlayer(std::string &name) : Hand(), name(name) {};
    explicit GenericPlayer(std::string &&name) : Hand(), name(name) {};
    GenericPlayer(const GenericPlayer &genericPlayer) = default;
    ~GenericPlayer() override = default;

    [[nodiscard]] std::string getName() const;

    [[nodiscard]] bool isBoosted() const;

    void bust() const;

    virtual bool isHitting() = 0;

    friend std::ostream &operator<< (std::ostream &ostream, const GenericPlayer &genericPlayer);
};


#endif //CPP_GENERICPLAYER_H
