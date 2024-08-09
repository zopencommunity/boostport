#include <iostream>
#include <boost/iterator/counting_iterator.hpp>

int main() {
    using namespace boost;

    // Create a counting iterator starting from 0
    counting_iterator<int> begin(0);
    counting_iterator<int> end(10);

    // Iterate over the range [0, 10)
    for (auto it = begin; it != end; ++it) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;

    return 0;
}

