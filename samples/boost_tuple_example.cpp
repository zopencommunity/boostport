#include <iostream>
#include <boost/tuple/tuple.hpp>
#include <boost/tuple/tuple_io.hpp> // For printing tuples

int main() {
    // Create a tuple with heterogeneous types
    boost::tuple<int, std::string, double> my_tuple(1, "Boost Tuple", 3.14);

    // Access elements using boost::get
    std::cout << "Integer value: " << boost::get<0>(my_tuple) << std::endl;
    std::cout << "String value: " << boost::get<1>(my_tuple) << std::endl;
    std::cout << "Double value: " << boost::get<2>(my_tuple) << std::endl;

    // Print the entire tuple
    std::cout << "Tuple contents: " << my_tuple << std::endl;

    return 0;
}

