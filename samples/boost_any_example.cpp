#include <iostream>
#include <boost/any.hpp>

int main() {
    boost::any a;
    
    // Store an integer
    a = 10;
    std::cout << "Stored integer: " << boost::any_cast<int>(a) << std::endl;
    
    // Store a string
    a = std::string("Boost C++ Libraries");
    std::cout << "Stored string: " << boost::any_cast<std::string>(a) << std::endl;
    
    return 0;
}

