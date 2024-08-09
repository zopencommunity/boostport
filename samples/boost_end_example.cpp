#include <boost/endian/buffers.hpp>
#include <iostream>

int main() {
    // Define a 32-bit integer
    int32_t original_value = 123456789;

    // Create a little-endian buffer
    boost::endian::little_int32_buf_t little_endian_value(original_value);

    // Create a big-endian buffer
    boost::endian::big_int32_buf_t big_endian_value(original_value);

    // Print original, little-endian, and big-endian values
    std::cout << "Original value: " << original_value << std::endl;
    std::cout << "Little-endian value: " << little_endian_value << std::endl;
    std::cout << "Big-endian value: " << big_endian_value << std::endl;

    // Access raw data from the little-endian buffer
    uint8_t* little_endian_data = little_endian_value.data();
    std::cout << "Little-endian raw data: ";
    for (std::size_t i = 0; i < sizeof(little_endian_value); ++i) {
        std::cout << std::hex << static_cast<int>(little_endian_data[i]) << " ";
    }
    std::cout << std::dec << std::endl;

    // Access raw data from the big-endian buffer
    uint8_t* big_endian_data = big_endian_value.data();
    std::cout << "Big-endian raw data: ";
    for (std::size_t i = 0; i < sizeof(big_endian_value); ++i) {
        std::cout << std::hex << static_cast<int>(big_endian_data[i]) << " ";
    }
    std::cout << std::dec << std::endl;

    return 0;
}

