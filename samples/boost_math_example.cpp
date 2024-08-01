#include <iostream>
#include <boost/math/special_functions/factorials.hpp>

int main() {
    // Calculate the factorial of 5
    unsigned int n = 5;
    double factorial = boost::math::factorial<double>(n);
    
    std::cout << "Factorial of " << n << " is " << factorial << std::endl;
    
    return 0;
}

