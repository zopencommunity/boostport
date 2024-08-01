#include <iostream>
#include <boost/array.hpp>
#include <algorithm> // for std::sort

int main() {
    // Define a boost::array with 5 integers
    boost::array<int, 5> arr = {3, 1, 4, 1, 5};

    // Access and modify elements
    arr[1] = 9;

    // Print the elements
    std::cout << "Array elements: ";
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Use STL algorithms (e.g., std::sort) on boost::array
    std::sort(arr.begin(), arr.end());

    // Print the sorted array
    std::cout << "Sorted array elements: ";
    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Fill the array with a single value
    arr.fill(7);

    // Print the filled array
    std::cout << "Filled array elements: ";
    for (const auto& elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

