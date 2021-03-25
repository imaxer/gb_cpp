/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_PARALLELOGRAM_H
#define CPP_PARALLELOGRAM_H

#include "Figure.h"

class Parallelogram : public Figure  {
private:
    double len1;
    double len2;
    double angle;
public:
    Parallelogram(double len1, double len2, double angle) : len1(len1), len2(len2), angle(angle) {};
    double area() override;
};


#endif //CPP_PARALLELOGRAM_H
