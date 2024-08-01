#include <boost/integer/static_log2.hpp>  // Header for static_log2
#include <boost/integer_traits.hpp>
#include <iostream>

int main() 
{
    // Using boost::static_log2 to calculate log base 2 of an integer at compile time
    constexpr int value = 16;
    constexpr int log2_value = boost::static_log2<value>::value;
    std::cout << "Log2(" << value << ") = " << log2_value << "\n";

    // Using boost::integer_traits to get the min and max values of an integer type
    std::cout << "Min int: " << boost::integer_traits<int>::const_min << "\n";
    std::cout << "Max int: " << boost::integer_traits<int>::const_max << "\n";

    return 0;
}

