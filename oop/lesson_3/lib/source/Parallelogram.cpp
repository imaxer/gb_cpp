/*
 * Created by Maksim Paramonov on 22.03.2021.
*/
#include <math.h>

#include "../include/Parallelogram.h"

double Parallelogram::area() {
    return this->len1 * this->len2 * sin(this->angle);
}