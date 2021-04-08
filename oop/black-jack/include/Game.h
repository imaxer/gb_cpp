/*
 * Created by Maksim Paramonov on 08.04.2021.
*/

#ifndef CPP_GAME_H
#define CPP_GAME_H

#include "Deck.h"
#include "House.h"
#include "Player.h"

#include <vector>
#include <string>
#include <iostream>

class Game {
private:
    Deck *deck;
    House *house;
    std::vector<Player*> *players;

public:
    explicit Game(std::vector<std::string> &names);

    ~Game();

    void play();
};


#endif //CPP_GAME_H
