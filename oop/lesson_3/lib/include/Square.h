/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_SQUARE_H
#define CPP_SQUARE_H

#include <math.h>

#include "Parallelogram.h"

class Square : public Parallelogram {
public:
    Square(double len) : Parallelogram(len, len, M_PI_2) {};
};


#endif //CPP_SQUARE_H
