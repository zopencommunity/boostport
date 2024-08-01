#include <iostream>
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/mean.hpp>
#include <boost/accumulators/statistics/variance.hpp>
#include <boost/accumulators/statistics/max.hpp>

int main() {
    using namespace boost::accumulators;

    // Define an accumulator set for calculating mean, variance, and max
    accumulator_set<double, stats<tag::mean, tag::variance, tag::max>> acc;

    // Add some data to the accumulator
    acc(1.2);
    acc(2.3);
    acc(3.4);
    acc(4.5);
    acc(5.6);

    // Retrieve and print the statistics
    std::cout << "Mean: " << mean(acc) << std::endl;
    std::cout << "Variance: " << variance(acc) << std::endl;
    std::cout << "Max: " << max(acc) << std::endl;

    return 0;
}

