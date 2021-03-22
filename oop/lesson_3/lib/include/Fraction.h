/*
 * Created by Maksim Paramonov on 22.03.2021.
*/

#ifndef CPP_FRACTION_H
#define CPP_FRACTION_H


class Fraction {
private:
    int nominator;
    int denominator;

    bool valid = true;
public:
    Fraction(int nominator, int denominator) {
        this->nominator = nominator;
        this->denominator = denominator;
        if (denominator == 0) {
            this->valid = false;
        }
    }

    bool isValid();

    friend Fraction operator+ (const Fraction &left, const Fraction &right);

    friend Fraction operator- (const Fraction &left, const Fraction &right);

    friend Fraction operator* (const Fraction &left, const Fraction &right);

    friend Fraction operator/ (const Fraction &left, const Fraction &right);

    friend Fraction operator- (const Fraction &left);

    friend bool operator== (const Fraction &left, const Fraction &right);

    friend bool operator!= (const Fraction &left, const Fraction &right);

    friend bool operator< (const Fraction &left, const Fraction &right);

    friend bool operator> (const Fraction &left, const Fraction &right);

    friend bool operator<= (const Fraction &left, const Fraction &right);

    friend bool operator>= (const Fraction &left, const Fraction &right);
};


#endif //CPP_FRACTION_H
