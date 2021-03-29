/*
 * Created by Maksim Paramonov on 29.03.2021.
*/

#ifndef CPP_PAIR1_H
#define CPP_PAIR1_H


template <typename T> class Pair1 {
private:
    T firstValue;
    T secondValue;
public:
    Pair1(T first, T second) : firstValue(first), secondValue(second) {};

    T first() const {
        return this->firstValue;
    };
    T second() const {
        return this->secondValue;
    };
};

#endif //CPP_PAIR1_H
