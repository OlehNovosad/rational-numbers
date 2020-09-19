//
// Created by olehn on 12.09.20.
//

#ifndef RATIONAL_RATIONAL_H
#define RATIONAL_RATIONAL_H

#include <iostream>

class Rational {
public:
    Rational() {
        numerator = 0;
        denominator = 0;
    }

    friend std::ostream &operator<<(std::ostream &output, Rational &R) {
        for (int i = R.denominator * R.numerator; i > 1; i--) {
            if ((R.denominator % i == 0) && (R.numerator % i == 0)) {
                R.denominator /= i;
                R.numerator /= i;
            }
        }
        if ((R.numerator == 0) && (R.denominator == 0)) {
            std::cout << "Inf";
            return output;
        } else if (R.denominator == 0) {
            std::cout << "NaN";
            return output;
        }
        output << R.numerator << "/" << R.denominator;
        return output;
    }

    friend std::istream &operator>>(std::istream &input, Rational &R) {
        input >> R.numerator >> R.denominator;
        return input;
    }

    Rational operator*(Rational) const;

    Rational operator/(Rational) const;

    Rational operator+(Rational) const;

    Rational operator-(Rational) const;

private:
    int numerator;
    int denominator;
};

#endif //RATIONAL_RATIONAL_H
