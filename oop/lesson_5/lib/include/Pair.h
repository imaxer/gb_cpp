/*
 * Created by Maksim Paramonov on 29.03.2021.
*/

#ifndef CPP_PAIR_H
#define CPP_PAIR_H

template <typename First, typename Second>
class Pair {
private:
    First firstValue;
    Second secondValue;
public:
    Pair(First first, Second second) : firstValue(first), secondValue(second) {};

    First first() const {
        return this->firstValue;
    }

    Second second() const {
        return this->secondValue;
    }
};


#endif //CPP_PAIR_H
