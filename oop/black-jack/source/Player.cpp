/*
 * Created by Maksim Paramonov on 05.04.2021.
*/

#include "../include/Player.h"

bool Player::isHitting() {
    std::string answer;

    std::cout << answer << std::endl;
    while (!(answer == "y" || answer == "n") && getValue() <= 21) {
        std::cout << "Does player " << getName() << " need one more card? (y/n)" << std::endl;
        std::getline(std::cin, answer);
    }
    return answer == "y";
}

void Player::win() {
    std::cout << "Player " << getName() << " win!!!" << std::endl;
}

void Player::lose() {
    std::cout << "Player " << getName() << " lose!!!" << std::endl;
}

void Player::push() {
    std::cout << "Player " << getName() << " draw!!!" << std::endl;
}