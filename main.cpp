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
    std::cout << "Addition: " << result << std::endl;

    /*  Subtraction */
    result = rational1 - rational2;
    std::cout << "Subtraction: " << result << std::endl;

    /*  Multiplication */
    result = rational1 * rational2;
    std::cout << "Multiplication: " << result << std::endl;

    /*  Division */
    result = rational1 / rational2;
    std::cout << "Division: " << result << std::endl;

    return 0;
}
