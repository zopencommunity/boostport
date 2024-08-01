#include <iostream>
#include <fstream>
#include <string>
#include <boost/system/error_code.hpp>
#include <boost/system/system_error.hpp>

// Function to read a file and handle errors
void readFile(const std::string& filename, boost::system::error_code& ec) {
    std::ifstream file(filename);

    // Check if the file opened successfully
    if (!file.is_open()) {
        ec = boost::system::errc::make_error_code(boost::system::errc::no_such_file_or_directory);
        return;
    }

    //std::string content;
    //file >> content;
    //
    std::string content((std::istreambuf_iterator<char>(file)),
                         std::istreambuf_iterator<char>());


    // Check if reading the file was successful
    if (file.fail()) {
        ec = boost::system::errc::make_error_code(boost::system::errc::io_error);
        return;
    }

    ec.clear();
    std::cout << "File content: " << content << std::endl;
}

int main() {
    // Create an error_code object
    boost::system::error_code ec;

    // Attempt to read a file
    readFile("boost_integer_example.cpp", ec);

    // Check if there was an error
    if (ec) {
        std::cerr << "Error: " << ec.message() << std::endl;
    } else {
        std::cout << "File read successfully." << std::endl;
    }

    return 0;
}

