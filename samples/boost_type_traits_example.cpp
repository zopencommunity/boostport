#include <iostream>
#include <boost/type_traits/is_integral.hpp>
#include <boost/type_traits/is_floating_point.hpp>
#include <boost/type_traits/remove_const.hpp>
#include <boost/type_traits/remove_reference.hpp>

int main() {
    // Check if a type is integral
    std::cout << "Is int an integral type? " 
              << (boost::is_integral<int>::value ? "Yes" : "No") << std::endl;

    std::cout << "Is float an integral type? " 
              << (boost::is_integral<float>::value ? "Yes" : "No") << std::endl;

    // Check if a type is a floating point
    std::cout << "Is float a floating point type? " 
              << (boost::is_floating_point<float>::value ? "Yes" : "No") << std::endl;

    std::cout << "Is int a floating point type? " 
              << (boost::is_floating_point<int>::value ? "Yes" : "No") << std::endl;

    // Remove const qualifier
    typedef const int ConstInt;
    typedef boost::remove_const<ConstInt>::type NonConstInt;

    std::cout << "Is ConstInt const? " 
              << (boost::is_const<ConstInt>::value ? "Yes" : "No") << std::endl;

    std::cout << "Is NonConstInt const? " 
              << (boost::is_const<NonConstInt>::value ? "Yes" : "No") << std::endl;

    // Remove reference qualifier
    typedef int& IntRef;
    typedef boost::remove_reference<IntRef>::type NonRefInt;

    std::cout << "Is IntRef a reference? " 
              << (boost::is_reference<IntRef>::value ? "Yes" : "No") << std::endl;

    std::cout << "Is NonRefInt a reference? " 
              << (boost::is_reference<NonRefInt>::value ? "Yes" : "No") << std::endl;

    return 0;
}

