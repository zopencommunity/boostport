#include <boost/type_index.hpp>
#include <iostream>

template <typename T>
void printTypeName(const T& obj) {
    boost::typeindex::type_index type = boost::typeindex::type_id_runtime(obj);
    std::cout << "Type: " << type.pretty_name() << "\n";
}

int main() {
    int int_var = 42;
    double double_var = 3.14;

    printTypeName(int_var);
    printTypeName(double_var);

    // Correctly compare types using type_id<int>() and type_id<double>()
    if (boost::typeindex::type_id<int>() == boost::typeindex::type_id<int>()) {
        std::cout << "int and int types match\n";
    } else {
        std::cout << "int and int types do not match\n";
    }

    if (boost::typeindex::type_id<int>() == boost::typeindex::type_id<double>()) {
        std::cout << "int and double types match\n";
    } else {
        std::cout << "int and double types do not match\n";
    }

    return 0; // Ensure that the main function ends with a return statement
}

