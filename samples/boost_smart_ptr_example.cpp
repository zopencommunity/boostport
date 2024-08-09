#include <iostream>
#include <boost/shared_ptr.hpp>

class MyClass {
public:
    MyClass() {
        std::cout << "MyClass Constructor" << std::endl;
    }
    ~MyClass() {
        std::cout << "MyClass Destructor" << std::endl;
    }
    void display() {
        std::cout << "Displaying MyClass" << std::endl;
    }
};

int main() {
    // Create a shared pointer to an instance of MyClass
    boost::shared_ptr<MyClass> ptr(new MyClass());
    
    // Use the shared pointer
    ptr->display();
    
    // Shared pointer goes out of scope and MyClass instance is automatically deleted
    return 0;
}

