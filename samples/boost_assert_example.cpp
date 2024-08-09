#include <boost/assert.hpp>
#include <iostream>

void divide(int numerator, int denominator) {
    // Assert that the denominator is not zero
    BOOST_ASSERT(denominator != 0);

    // Perform the division
    int result = numerator / denominator;
    std::cout << "Result: " << result << std::endl;
}

int main() {
    int a = 10;
    int b = 2;
    int c = 0;

    std::cout << "Dividing " << a << " by " << b << std::endl;
    divide(a, b);  // This will work

    std::cout << "Dividing " << a << " by " << c << std::endl;
    divide(a, c);  // This will trigger the assertion

    return 0;
}

