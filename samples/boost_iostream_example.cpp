#define back_inserter invalid_back_inserter
#include <__iterator/back_insert_iterator.h>
#include <iostream>
#include <string>
#undef back_inserter

#include <boost/iostreams/device/back_inserter.hpp>
#include <boost/iostreams/filtering_stream.hpp>

int main() {
    using namespace boost::iostreams;

    // Create a string to hold the output
    std::string output;

    // Create a filtering stream that writes to the string
    filtering_ostream out(back_inserter(output));

    // Write data to the stream
    out << "Hello, Boost Iostreams!" << std::endl;

    // Close the stream (flushes the buffer)
    out.flush();

    // Print the content of the string
    std::cout << "Output: " << output << std::endl;

    return 0;
}

