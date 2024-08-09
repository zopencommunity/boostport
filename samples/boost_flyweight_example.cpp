#include <iostream>
#include <boost/flyweight.hpp>

int main() {
    using namespace boost::flyweights;

    // Define a flyweight type for shared strings
    typedef flyweight<std::string> flyweight_string;

    // Create flyweight instances
    flyweight_string fw1("Hello, Boost Flyweights!");
    flyweight_string fw2("Hello, Boost Flyweights!");
    flyweight_string fw3("Different string");

    // Display the strings
    std::cout << "fw1: " << fw1 << std::endl;
    std::cout << "fw2: " << fw2 << std::endl;
    std::cout << "fw3: " << fw3 << std::endl;

    // Check if fw1 and fw2 are the same instance
    if (fw1.get() == fw2.get()) {
        std::cout << "fw1 and fw2 are the same instance." << std::endl;
    } else {
        std::cout << "fw1 and fw2 are different instances." << std::endl;
    }

    return 0;
}

