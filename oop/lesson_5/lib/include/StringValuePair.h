/*
 * Created by Maksim Paramonov on 29.03.2021.
*/

#ifndef CPP_STRINGVALUEPAIR_H
#define CPP_STRINGVALUEPAIR_H

#include <string>

#include "Pair.h"

template <typename Second>
class StringValuePair : public Pair<std::string, Second> {
public:
    StringValuePair(const std::string& first, Second second) : Pair<std::string, Second>(first, second) {};
};


#endif //CPP_STRINGVALUEPAIR_H
