#include <boost/optional.hpp>
#include <iostream>
#include <string>

int main() {
    using namespace boost;

    // Create an optional integer
    optional<int> opt1;
    optional<int> opt2 = 42;

    // Check if the optional has a value
    if (opt1) {
        std::cout << "opt1 has a value: " << *opt1 << std::endl;
    } else {
        std::cout << "opt1 is empty" << std::endl;
    }

    if (opt2) {
        std::cout << "opt2 has a value: " << *opt2 << std::endl;
    } else {
        std::cout << "opt2 is empty" << std::endl;
    }

    // Use optional with functions
    auto divide = [](int numerator, int denominator) -> optional<double> {
        if (denominator == 0) {
            return none; // No result
        }
        return static_cast<double>(numerator) / denominator;
    };

    optional<double> result = divide(10, 2);
    if (result) {
        std::cout << "Result: " << *result << std::endl;
    } else {
        std::cout << "Division by zero" << std::endl;
    }

    result = divide(10, 0);
    if (result) {
        std::cout << "Result: " << *result << std::endl;
    } else {
        std::cout << "Division by zero" << std::endl;
    }

    return 0;
}

