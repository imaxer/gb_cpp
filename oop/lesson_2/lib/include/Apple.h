/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_APPLE_H
#define CPP_APPLE_H

#include <string>

#include "Fruit.h"

class Apple : public Fruit {
protected:
    Apple(std::string name, Color color) : Fruit(name + " apple", color) {};
public:
    explicit Apple(Color color) : Fruit("apple", color) {};
};


#endif //CPP_APPLE_H
