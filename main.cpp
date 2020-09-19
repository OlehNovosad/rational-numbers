#include "rational.h"

int main() {
    Rational rational1{};
    Rational rational2{};
    Rational result{};
    std::cout << "Rational numbers" << std::endl << std::endl;

    std::cout << "Enter numerator and denumerator via space for first fraction: ";
    std::cin >> rational1;

    std::cout << "Enter numerator and denumerator via space for second fraction: ";
    std::cin >> rational2;

    /*  Addition  */
    result = rational1 + rational2;
    std::cout << result;

    /*  Subtraction */
    result = rational1 - rational2;
    std::cout << result;

    /*  Multiplication */
    result = rational1 * rational2;
    std::cout << result;

    /*  Division */
    result = rational1 / rational2;
    std::cout << result;

    return 0;
}
