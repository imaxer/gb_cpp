/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_GRANNYSMITH_H
#define CPP_GRANNYSMITH_H

#include <string>

#include "Apple.h"

class GrannySmith : public Apple {
public:
    GrannySmith() : Apple("Granny Smith", Color::GREEN) {};
};


#endif //CPP_GRANNYSMITH_H
