/*
 * Created by Maksim Paramonov on 05.04.2021.
*/

#ifndef CPP_PLAYER_H
#define CPP_PLAYER_H

#include <string>
#include <iostream>

#include "GenericPlayer.h"

class Player : public GenericPlayer {
public:
    explicit Player(std::string &name) : GenericPlayer(name) {};
    explicit Player(std::string &&name) : GenericPlayer(name) {};
    Player(const Player &player) = default;
    Player(Player &&player) = default;
    ~Player() override = default;

    bool isHitting() override;

    void win();

    void lose();

    void push();
};


#endif //CPP_PLAYER_H
