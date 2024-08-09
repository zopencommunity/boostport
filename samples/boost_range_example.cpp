#include <boost/range/adaptors.hpp>
#include <boost/range/algorithm.hpp>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Filter out even numbers and then square the remaining numbers
    auto odd_squares = numbers 
                        | boost::adaptors::filtered([](int n) { return n % 2 != 0; })
                        | boost::adaptors::transformed([](int n) { return n * n; });

    std::cout << "Odd squares: ";
    boost::copy(odd_squares, std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}

