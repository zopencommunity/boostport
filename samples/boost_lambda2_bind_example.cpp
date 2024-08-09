#include <iostream>
#include <boost/lambda/lambda.hpp>
#include <boost/lambda/bind.hpp>
#include <algorithm>
#include <vector>

struct add_value {
    int value;
    add_value(int v) : value(v) {}
    void operator()(int &x) const { x += value; }
};

int main() {
    using namespace boost::lambda;

    std::vector<int> v = {1, 2, 3, 4, 5};

    // Create a lambda to print elements
    std::for_each(v.begin(), v.end(), std::cout << _1 << " ");
    std::cout << std::endl;

    // Create a lambda to add a value using a function object
    std::for_each(v.begin(), v.end(), add_value(5));

    // Print modified elements
    std::for_each(v.begin(), v.end(), std::cout << _1 << " ");
    std::cout << std::endl;

    return 0;
}

