#include <boost/chrono.hpp>
#include <iostream>
#include <boost/thread/thread.hpp>

int main() {
    boost::chrono::thread_clock::time_point start = boost::chrono::thread_clock::now();

    // Simulate a task by sleeping for 1 second
    boost::this_thread::sleep_for(boost::chrono::seconds(1));

    boost::chrono::thread_clock::time_point end = boost::chrono::thread_clock::now();
    boost::chrono::duration<double> elapsed = end - start;

    std::cout << "Elapsed time: " << elapsed.count() << " seconds" << std::endl;
    return 0;
}

