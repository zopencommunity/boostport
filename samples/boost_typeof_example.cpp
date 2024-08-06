#include <iostream>
#include <boost/typeof/typeof.hpp>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Use BOOST_TYPEOF to deduce the type of an expression
    BOOST_TYPEOF(numbers.begin()) iter = numbers.begin();

    std::cout << "Vector elements:" << std::endl;
    for (; iter != numbers.end(); ++iter) {
        std::cout << *iter << std::endl;
    }

    return 0;
}

