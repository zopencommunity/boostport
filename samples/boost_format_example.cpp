#include <boost/format.hpp>
#include <iostream>

int main() {
    // Define some variables to format
    int age = 25;
    std::string name = "John";
    double height = 175.5;

    // Format a string using Boost.Format
    std::string formatted_str = boost::str(
        boost::format("Name: %s, Age: %d, Height: %.2f cm") % name % age % height
    );

    // Output the formatted string
    std::cout << formatted_str << std::endl;

    // You can also use Boost.Format directly with std::cout
    std::cout << boost::format("Name: %s, Age: %d, Height: %.2f cm") % name % age % height << std::endl;

    return 0;
}

