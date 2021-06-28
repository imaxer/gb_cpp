/*
 * Created by Maksim Paramonov on 08.04.2021.
*/

#include "../include/Game.h"

Game::Game(std::vector<std::string> &names) {
    deck = new Deck();
    deck->shuffle();

    house = new House();

    players = new std::vector<Player *>;

    for (auto it : names) {
        players->push_back(new Player(it));
    }
}

Game::~Game() {
    delete deck;
    delete house;
    delete players;
}

void Game::play() {
    for (auto p_player : *players) {
        deck->deal(*p_player);
        deck->deal(*p_player);
    }

    deck->deal(*house);
    deck->deal(*house);

    house->flipFirstCard();

    std::cout << *house << std::endl;

    for (auto p_player : *players) {
        std::cout << *p_player << std::endl;
    }

    for (auto p_player : *players) {
        deck->addltionalCards(*p_player);
    }

    house->flipFirstCard();

    deck->addltionalCards(*house);

    int house_result = house->getValue();
    for (auto p_player : *players) {
        int result = p_player->getValue();
        if (result > 21 || result < house_result) {
            p_player->lose();
        } else if (result == house_result) {
            p_player->push();
        } else {
            p_player->win();
        }
    }
}

