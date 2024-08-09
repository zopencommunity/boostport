#include <boost/filesystem.hpp>
#include <iostream>

int main() {
    try {
        boost::filesystem::path p = boost::filesystem::current_path();
        std::cout << "Current path is: " << p << std::endl;
    } catch (const boost::filesystem::filesystem_error& ex) {
        std::cerr << "Filesystem error: " << ex.what() << std::endl;
    }
    return 0;
}

