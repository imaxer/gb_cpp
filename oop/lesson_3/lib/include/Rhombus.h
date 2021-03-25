/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_RHOMBUS_H
#define CPP_RHOMBUS_H

#include "Parallelogram.h"

class Rhombus : public Parallelogram {
public:
    Rhombus(double len, double angle) : Parallelogram(len, len, angle) {};
};


#endif //CPP_RHOMBUS_H
