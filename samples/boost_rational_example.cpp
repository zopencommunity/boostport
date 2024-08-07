#include <boost/rational.hpp>
#include <iostream>

int main() {
    using namespace boost;

    // Define rational numbers
    rational<int> r1(5, 2);  // Represents 5/2
    rational<int> r2(3, 4);  // Represents 3/4

    // Arithmetic operations
    auto sum = r1 + r2;      // Addition
    auto diff = r1 - r2;     // Subtraction
    auto prod = r1 * r2;     // Multiplication
    auto quot = r1 / r2;     // Division

    // Output the results
    std::cout << "r1: " << r1 << " (" << r1.numerator() << "/" << r1.denominator() << ")\n";
    std::cout << "r2: " << r2 << " (" << r2.numerator() << "/" << r2.denominator() << ")\n";
    std::cout << "Sum: " << sum << " (" << sum.numerator() << "/" << sum.denominator() << ")\n";
    std::cout << "Difference: " << diff << " (" << diff.numerator() << "/" << diff.denominator() << ")\n";
    std::cout << "Product: " << prod << " (" << prod.numerator() << "/" << prod.denominator() << ")\n";
    std::cout << "Quotient: " << quot << " (" << quot.numerator() << "/" << quot.denominator() << ")\n";

    // Simplify the rational number
    auto simplified = r1 * r2;
    std::cout << "Simplified product: " << simplified << " (" 
              << simplified.numerator() << "/" << simplified.denominator() << ")\n";

    return 0;
}

