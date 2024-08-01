#include <iostream>
#include <boost/timer/timer.hpp>

// A function that performs some time-consuming work
void timeConsumingFunction() {
    volatile long long sum = 0; // volatile to prevent optimization
    for (long long i = 0; i < 1000000000; ++i) {
        sum += i;
    }
    std::cout << "Sum: " << sum << std::endl;
}

int main() {
    // Create a timer
    boost::timer::cpu_timer timer;

    // Start the timer
    timer.start();

    // Call the time-consuming function
    timeConsumingFunction();

    // Stop the timer
    timer.stop();

    // Get the elapsed times
    boost::timer::cpu_times elapsedTimes = timer.elapsed();

    // Convert to milliseconds
    double wallTime = elapsedTimes.wall / 1e6;   // Wall clock time
    double userTime = elapsedTimes.user / 1e6;   // User CPU time
    double systemTime = elapsedTimes.system / 1e6; // System CPU time

    // Print the results
    std::cout << "Wall time: " << wallTime << " ms" << std::endl;
    std::cout << "User CPU time: " << userTime << " ms" << std::endl;
    std::cout << "System CPU time: " << systemTime << " ms" << std::endl;

    return 0;
}

