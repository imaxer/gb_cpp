/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#include "../include/Fruit.h"

std::string Fruit::getName() {
    return this->name;
}

std::string Fruit::getColor() {
    return ColorMap.find(this->color)->second;
}
