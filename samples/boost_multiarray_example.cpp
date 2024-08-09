#include <iostream>
#include <boost/multi_array.hpp>

int main() {
    // Define a 2D array with dimensions 3x4
    boost::multi_array<int, 2> array(boost::extents[3][4]);

    // Initialize the array elements
    int value = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            array[i][j] = value++;
        }
    }

    // Print the array elements
    std::cout << "2D array elements:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

