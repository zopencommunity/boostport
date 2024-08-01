#include <boost/date_time/posix_time/posix_time.hpp>
#include <iostream>

int main() {
    // Get the current time
    boost::posix_time::ptime now = boost::posix_time::second_clock::local_time();

    // Output the current time
    std::cout << "Current local time: " << now << std::endl;

    return 0;
}

