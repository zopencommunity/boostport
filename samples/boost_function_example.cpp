#include <boost/function.hpp>
#include <boost/bind.hpp>
#include <iostream>
#include <string>

// A simple function
void simpleFunction(const std::string& msg) {
    std::cout << "Simple Function: " << msg << std::endl;
}

// A class with a member function
class MyClass {
public:
    void memberFunction(const std::string& msg) const {
        std::cout << "Member Function: " << msg << std::endl;
    }
};

int main() {
    // Define a Boost.Function type
    boost::function<void(const std::string&)> func;

    // Assign a free function to the Boost.Function object
    func = &simpleFunction;
    func("Hello from free function");

    // Assign a member function to the Boost.Function object
    MyClass obj;
    func = boost::bind(&MyClass::memberFunction, &obj, _1);
    func("Hello from member function");

    // Assign a lambda function to the Boost.Function object
    func = [](const std::string& msg) {
        std::cout << "Lambda Function: " << msg << std::endl;
    };
    func("Hello from lambda function");

    return 0;
}

