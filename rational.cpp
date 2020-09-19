//
// Created by olehn on 12.09.20.
//

#include "rational.h"

Rational Rational::operator*(Rational param) const {
    Rational temp{};
    temp.numerator = numerator * param.numerator;
    temp.denominator = denominator * param.denominator;

    return (temp);
}

Rational Rational::operator/(Rational param) const {
    Rational temp{};
    temp.numerator = numerator * param.denominator;
    temp.denominator = denominator * param.numerator;

    return (temp);
}

Rational Rational::operator+(Rational param) const {
    Rational temp{};

    temp.numerator = (numerator * param.denominator) + (param.numerator * denominator);
    temp.denominator = denominator * param.denominator;
    return (temp);
}

Rational Rational::operator-(Rational param) const {
    Rational temp{};

    temp.numerator = (numerator * param.denominator) - (param.numerator * denominator);
    temp.denominator = denominator * param.denominator;
    return (temp);
}