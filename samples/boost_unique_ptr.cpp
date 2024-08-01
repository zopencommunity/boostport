#include <iostream>
#include <boost/move/unique_ptr.hpp>

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

void transferOwnership(boost::movelib::unique_ptr<MyClass> ptr) {
    std::cout << "In transferOwnership function" << std::endl;
    ptr->display();
}

int main() {
    // Create a unique_ptr to manage the MyClass object
    boost::movelib::unique_ptr<MyClass> ptr1(new MyClass());
    
    // Display the object using the first unique_ptr
    std::cout << "In main function, before transfer" << std::endl;
    ptr1->display();

    // Transfer ownership to another unique_ptr using std::move
    transferOwnership(boost::move(ptr1));

    // At this point, ptr1 no longer owns the object
    if (!ptr1) {
        std::cout << "ptr1 no longer owns the object" << std::endl;
    }

    return 0;
}

