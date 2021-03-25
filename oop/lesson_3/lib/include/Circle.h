/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_CIRCLE_H
#define CPP_CIRCLE_H

#include "Figure.h"

class Circle : public Figure {
private:
    double r;
public:
    Circle(double r): r(r) {};
    double area() override;
};


#endif //CPP_CIRCLE_H
