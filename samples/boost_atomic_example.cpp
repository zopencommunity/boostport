#include <iostream>
#include <thread>
#include <vector>
#include <boost/atomic.hpp>

// Shared atomic counter
boost::atomic<int> atomicCounter(0);

// Number of increments each thread should perform
const int numIncrements = 1000;
const int numThreads = 10;

// Function to be executed by each thread
void incrementCounter() {
    for (int i = 0; i < numIncrements; ++i) {
        ++atomicCounter;
    }
}

int main() {
    // Create a vector to hold the threads
    std::vector<std::thread> threads;

    // Launch threads
    for (int i = 0; i < numThreads; ++i) {
        threads.emplace_back(incrementCounter);
    }

    // Join threads
    for (auto& thread : threads) {
        thread.join();
    }

    // Print the final value of the counter
    std::cout << "Final counter value: " << atomicCounter.load() << std::endl;

    return 0;
}

