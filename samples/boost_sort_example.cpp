#include <boost/sort/spreadsort/spreadsort.hpp>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> data = {5, 2, 9, 1, 5, 6};

    // Sort using Boost's spreadsort
    boost::sort::spreadsort::spreadsort(data.begin(), data.end());

    std::cout << "Sorted data: ";
    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}

