/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_RECTANGLE_H
#define CPP_RECTANGLE_H

#include <math.h>

#include "Parallelogram.h"

class Rectangle : public Parallelogram {
public:
    Rectangle(double len1, double len2): Parallelogram(len1, len2, M_PI_2) {};
};


#endif //CPP_RECTANGLE_H
