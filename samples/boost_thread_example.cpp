#include <iostream>
#include <boost/thread.hpp>
#include <boost/chrono.hpp>

void print_hello() {
    std::cout << "Hello from thread!" << std::endl;
}

void print_numbers() {
    for (int i = 0; i < 5; ++i) {
        std::cout << "Number: " << i << std::endl;
        boost::this_thread::sleep_for(boost::chrono::seconds(1)); // Sleep for 1 second
    }
}

int main() {
    // Create and start a thread that runs the print_hello function
    boost::thread thread1(print_hello);

    // Create and start a thread that runs the print_numbers function
    boost::thread thread2(print_numbers);

    // Wait for the threads to complete
    thread1.join();
    thread2.join();

    std::cout << "Both threads have completed." << std::endl;

    return 0;
}

