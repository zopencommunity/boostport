#include <boost/random.hpp>
#include <iostream>
#include <iomanip>

int main() {
    // Define a random number generator
    boost::random::mt19937 rng; // Mersenne Twister generator
    rng.seed(static_cast<unsigned>(std::time(0))); // Seed with current time

    // Define a uniform integer distribution
    boost::random::uniform_int_distribution<> uniform_int_dist(1, 100);
    
    // Define a uniform real distribution
    boost::random::uniform_real_distribution<> uniform_real_dist(0.0, 1.0);
    
    // Define a normal (Gaussian) distribution
    boost::random::normal_distribution<> normal_dist(0.0, 1.0); // mean=0, stddev=1

    // Generate and print random numbers
    std::cout << "Uniform integer distribution (1 to 100):" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << uniform_int_dist(rng) << " ";
    }
    std::cout << std::endl;

    std::cout << "Uniform real distribution (0.0 to 1.0):" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << std::fixed << std::setprecision(2) << uniform_real_dist(rng) << " ";
    }
    std::cout << std::endl;

    std::cout << "Normal distribution (mean=0, stddev=1):" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << std::fixed << std::setprecision(2) << normal_dist(rng) << " ";
    }
    std::cout << std::endl;

    return 0;
}

