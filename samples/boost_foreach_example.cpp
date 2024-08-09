#include <boost/foreach.hpp>
#include <iostream>
#include <vector>
#include <list>
#include <set>

// Define a macro for Boost.Foreach
#ifndef FOREACH
#define FOREACH BOOST_FOREACH
#endif

int main() {
    // Example 1: Using Boost.Foreach with a vector
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "Vector elements:" << std::endl;
    FOREACH(int elem, vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Example 2: Using Boost.Foreach with a list
    std::list<std::string> lst = {"one", "two", "three", "four"};
    std::cout << "List elements:" << std::endl;
    FOREACH(const std::string& elem, lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Example 3: Using Boost.Foreach with a set
    std::set<double> s = {1.1, 2.2, 3.3, 4.4};
    std::cout << "Set elements:" << std::endl;
    FOREACH(double elem, s) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

