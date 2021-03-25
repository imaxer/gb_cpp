/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_BANANA_H
#define CPP_BANANA_H

#include "Fruit.h"

class Banana : public Fruit {
public:
    Banana() : Fruit("banana", Color::YELLOW) {};
};


#endif //CPP_BANANA_H
