#include <iostream>
#include <boost/align/aligned_alloc.hpp>
#include <boost/aligned_storage.hpp>
#include <cstdlib> // For std::free

int main() {
    // Define the alignment requirement (e.g., 16 bytes)
    constexpr std::size_t alignment = 16;

    // Allocate aligned memory for an array of 4 integers
    int* alignedArray = static_cast<int*>(boost::align::aligned_alloc(alignment, sizeof(int) * 4));

    // Check if the memory was allocated successfully
    if (alignedArray == nullptr) {
        std::cerr << "Memory allocation failed!" << std::endl;
        return 1;
    }

    // Initialize and print the aligned array
    std::cout << "Aligned Array Address: " << alignedArray << std::endl;
    for (int i = 0; i < 4; ++i) {
        alignedArray[i] = i + 1;
        std::cout << "alignedArray[" << i << "] = " << alignedArray[i] << std::endl;
    }

    // Manually free the aligned memory
    std::free(alignedArray);

    // Create aligned storage
    boost::align::aligned_storage<alignment, sizeof(int)> storage;

    // Use the storage
    int* storagePtr = static_cast<int*>(storage.data());
    storagePtr[0] = 42;
    storagePtr[1] = 43;

    // Print the contents of the aligned storage
    std::cout << "Aligned Storage Address: " << storagePtr << std::endl;
    std::cout << "storagePtr[0] = " << storagePtr[0] << std::endl;
    std::cout << "storagePtr[1] = " << storagePtr[1] << std::endl;

    return 0;
}

