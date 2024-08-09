#include <iostream>
#include <boost/lambda/lambda.hpp>
#include <boost/lambda/bind.hpp>
#include <algorithm>
#include <vector>

int main() {
    using namespace boost::lambda;

    std::vector<int> v = {1, 2, 3, 4, 5};

    // Print elements using lambda with bind
    std::for_each(v.begin(), v.end(), std::cout << _1 << " ");
    std::cout << std::endl;

    // Modify elements using lambda with bind
    std::for_each(v.begin(), v.end(), _1 = _1 + 10);

    // Print modified elements
    std::for_each(v.begin(), v.end(), std::cout << _1 << " ");
    std::cout << std::endl;

    return 0;
}

