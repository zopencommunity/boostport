#include <iostream>
#include <boost/container/vector.hpp>

// Alias for convenience
namespace bc = boost::container;

int main() {
    // Create a boost::container::vector of integers
    bc::vector<int> numbers;

    // Insert some elements
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Print elements
    std::cout << "Numbers in the vector: ";
    for (auto number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    // Modify an element
    numbers[1] = 50;

    // Print modified vector
    std::cout << "Numbers after modification: ";
    for (auto number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    // Remove the last element
    numbers.pop_back();

    // Print vector after removal
    std::cout << "Numbers after removing the last element: ";
    for (auto number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}

