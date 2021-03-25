/*
 * Created by Maksim Paramonov on 22.03.2021.
*/
#include <math.h>

#include "../include/Circle.h"

double Circle::area() {
    return M_PI * this->r * this->r;
}
