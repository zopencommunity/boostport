#include <iostream>
#include <boost/endian/buffers.hpp>
#include <boost/endian/conversion.hpp>

int main() {
    int32_t host_value = 0x12345678;

    // Convert host value to big endian using Boost endian buffer
    boost::endian::big_int32_buf_t big_endian_value(host_value);
    // Convert host value to little endian using Boost endian buffer
//    boost::endian::little_int32_buf_t little_endian_value(host_value);
 // Manually convert host value to little endian
// Convert host value to little endian
    int32_t little_endian_value = boost::endian::endian_reverse(host_value);

    std::cout << "Host value: " << std::hex << host_value << std::dec << std::endl;
    std::cout << "Big endian: " << std::hex << big_endian_value.value() << std::dec << std::endl;
 //   std::cout << "Little endian: " << std::hex << little_endian_value.value() << std::dec << std::endl;
	std::cout << "Little endian: " << std::hex << little_endian_value << std::dec << std::endl;
 

    // Manually reverse the little endian value to convert back to host endianness
//    int32_t converted_back_little = boost::endian::endian_reverse(little_endian_value.value());
//
    // Convert back from little endian to host endianness
    int32_t converted_back_little = boost::endian::endian_reverse(little_endian_value);    

    std::cout << "Converted back from big endian: " << std::hex << big_endian_value.value() << std::dec << std::endl;
    std::cout << "Converted back from little endian: " << std::hex << converted_back_little << std::dec << std::endl;

    return 0;
}

