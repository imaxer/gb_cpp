/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_COLOR_H
#define CPP_COLOR_H

#include <map>

enum Color {
    RED,
    YELLOW,
    GREEN
};

static std::map<Color, std::string> ColorMap = {
        {Color::RED, "red"},
        {Color::YELLOW, "yellow"},
        {Color::GREEN, "green"},
};

#endif //CPP_COLOR_H
