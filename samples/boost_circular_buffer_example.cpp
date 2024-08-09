#include <boost/circular_buffer.hpp>
#include <iostream>

int main() {
    // Create a circular buffer with a maximum size of 5
    boost::circular_buffer<int> cb(5);

    // Add elements to the circular buffer
    cb.push_back(1);
    cb.push_back(2);
    cb.push_back(3);
    cb.push_back(4);
    cb.push_back(5);

    std::cout << "Circular Buffer after adding 5 elements:" << std::endl;
    for (const auto& elem : cb) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Add more elements; this will overwrite the oldest elements
    cb.push_back(6);
    cb.push_back(7);

    std::cout << "Circular Buffer after adding 2 more elements:" << std::endl;
    for (const auto& elem : cb) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Remove elements from the circular buffer
    cb.pop_front();

    std::cout << "Circular Buffer after removing one element:" << std::endl;
    for (const auto& elem : cb) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

