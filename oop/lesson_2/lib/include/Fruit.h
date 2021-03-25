/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_FRUIT_H
#define CPP_FRUIT_H

#include <string>

#include "Color.h"

class Fruit {
private:
    std::string name;
    Color color;
public:
    Fruit(std::string name, Color color): name(name), color(color) {};
    std::string getName();
    std::string getColor();
};

#endif //CPP_FRUIT_H
