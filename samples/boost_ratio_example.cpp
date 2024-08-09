#include <boost/rational.hpp>
#include <iostream>

int main() {
    using namespace boost;

    // Define rational numbers
    rational<int> r1(3, 4);  // Represents 3/4
    rational<int> r2(5, 6);  // Represents 5/6

    // Perform arithmetic operations
    auto sum = r1 + r2;          // Addition
    auto diff = r1 - r2;         // Subtraction
    auto prod = r1 * r2;         // Multiplication
    auto quot = r1 / r2;         // Division

    std::cout << "r1: " << r1 << "\n";
    std::cout << "r2: " << r2 << "\n";
    std::cout << "Sum: " << sum << "\n";
    std::cout << "Difference: " << diff << "\n";
    std::cout << "Product: " << prod << "\n";
    std::cout << "Quotient: " << quot << "\n";

    // Output the numerator and denominator
    std::cout << "r1 Numerator: " << r1.numerator() << ", Denominator: " << r1.denominator() << "\n";

    return 0;
}

