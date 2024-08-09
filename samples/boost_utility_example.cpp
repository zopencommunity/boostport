#include <iostream>
#include <boost/optional.hpp>

int main() {
    // Define an optional integer
    boost::optional<int> opt1; // Default constructor, represents no value
    boost::optional<int> opt2(42); // Initializes with a value

    // Check if the optional contains a value
    if (opt1) {
        std::cout << "opt1 contains: " << *opt1 << std::endl;
    } else {
        std::cout << "opt1 is empty" << std::endl;
    }

    if (opt2) {
        std::cout << "opt2 contains: " << *opt2 << std::endl;
    } else {
        std::cout << "opt2 is empty" << std::endl;
    }

    // Set a new value to opt1
    opt1 = 100;
    std::cout << "opt1 now contains: " << *opt1 << std::endl;

    return 0;
}

