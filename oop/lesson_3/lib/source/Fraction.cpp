/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#include "../include/Fraction.h"

bool Fraction::isValid() {
    return this->valid;
}

Fraction operator+(const Fraction &left, const Fraction &right) {
    return Fraction((left.nominator * right.denominator) + (right.nominator * left.denominator), left.denominator * right.denominator);
}

Fraction operator-(const Fraction &left, const Fraction &right) {
    return Fraction((left.nominator * right.denominator) - (right.nominator * left.denominator), left.denominator * right.denominator);
}

Fraction operator*(const Fraction &left, const Fraction &right) {
    return Fraction(left.nominator * right.nominator, left.denominator * right.denominator);
}

Fraction operator/ (const Fraction &left, const Fraction &right) {
    return Fraction(left.nominator * right.denominator, left.denominator * right.nominator);
};

Fraction operator-(const Fraction &left) {
    return Fraction(-1 * left.nominator, left.denominator);
}

bool operator==(const Fraction &left, const Fraction &right) {
    if (left.denominator == right.denominator) {
        return left.nominator == right.nominator;
    }
    return left.nominator * right.denominator == right.nominator * left.denominator;
}

bool operator!=(const Fraction &left, const Fraction &right) {
    return !(left == right);
}

bool operator<(const Fraction &left, const Fraction &right) {
    if (left.denominator == right.denominator) {
        return left.nominator < right.nominator;
    }
    return left.nominator * right.denominator < right.nominator * left.denominator;
}

bool operator>(const Fraction &left, const Fraction &right) {
    if (left.denominator == right.denominator) {
        return left.nominator > right.nominator;
    }
    return left.nominator * right.denominator > right.nominator * left.denominator;
}

bool operator<=(const Fraction &left, const Fraction &right) {
    return !(left > right);
}

bool operator>=(const Fraction &left, const Fraction &right) {
    return !(left < right);
}

