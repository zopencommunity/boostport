#include <boost/assert.hpp>
#include <iostream>

void customAssertHandler(const char* expr, const char* function, const char* file, long line) {
    std::cerr << "Assertion failed: " << expr
              << ", function " << function
              << ", file " << file
              << ", line " << line << ".\n";
    std::abort();  // Terminate the program
}

#define BOOST_ASSERT_MSG(expr, msg) \
    ((expr) ? (void)0 : customAssertHandler(#expr, __func__, __FILE__, __LINE__))

void checkNumber(int number) {
    BOOST_ASSERT_MSG(number > 0, "Number must be positive");
    std::cout << "Number is positive: " << number << std::endl;
}

int main() {
    int num = 10;
    checkNumber(num);  // This will work

    num = -1;
    checkNumber(num);  // This will trigger the custom assertion handler

    return 0;
}

