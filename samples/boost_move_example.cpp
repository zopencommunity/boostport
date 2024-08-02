#include <iostream>
#include <boost/move/move.hpp>  // For move utilities

class MyClass {
public:
    MyClass() : data(new int(42)) {}
    ~MyClass() { delete data; }

    // Move constructor
    MyClass(MyClass &&other) noexcept : data(other.data) {
        other.data = nullptr;
    }

    // Move assignment operator
    MyClass &operator=(MyClass &&other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
        }
        return *this;
    }

    // Function to show the data
    void show() const {
        if (data) {
            std::cout << "Data: " << *data << std::endl;
        } else {
            std::cout << "Data is null" << std::endl;
        }
    }

private:
    int *data;
};

int main() {
    MyClass obj1;
    MyClass obj2(boost::move(obj1)); // Move construction using boost::move

    obj1.show(); // Should show "Data is null"
    obj2.show(); // Should show "Data: 42"

    MyClass obj3;
    obj3 = boost::move(obj2); // Move assignment using boost::move

    obj2.show(); // Should show "Data is null"
    obj3.show(); // Should show "Data: 42"

    return 0;
}

