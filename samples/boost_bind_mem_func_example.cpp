#include <boost/bind.hpp>
#include <iostream>

class MyClass {
public:
    void printProduct(int a, int b) const {
        std::cout << "Product: " << (a * b) << std::endl;
    }
};

int main() {
    MyClass obj;

    // Bind member function printProduct with obj as the object
    auto boundFunction = boost::bind(&MyClass::printProduct, &obj, 4, 5);

    // Call the bound function
    boundFunction();  // Output: Product: 20

    return 0;
}

