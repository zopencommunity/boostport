#include <boost/lexical_cast.hpp>
#include <iostream>
#include <string>

int main() {
    try {
        // Convert string to integer
        std::string str = "123";
        int num = boost::lexical_cast<int>(str);
        std::cout << "String to integer: " << num << std::endl;

        // Convert integer to string
        int num2 = 456;
        std::string str2 = boost::lexical_cast<std::string>(num2);
        std::cout << "Integer to string: " << str2 << std::endl;

        // Convert string to double
        std::string str3 = "3.14159";
        double d = boost::lexical_cast<double>(str3);
        std::cout << "String to double: " << d << std::endl;

        // Convert double to string
        double d2 = 2.71828;
        std::string str4 = boost::lexical_cast<std::string>(d2);
        std::cout << "Double to string: " << str4 << std::endl;
    } catch (const boost::bad_lexical_cast& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

