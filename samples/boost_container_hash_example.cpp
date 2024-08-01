#include <boost/functional/hash.hpp>
#include <iostream>
#include <unordered_map>
#include <string>

// Define a custom struct
struct MyStruct {
    int id;
    std::string name;

    // Equality operator for custom struct
    bool operator==(const MyStruct& other) const {
        return id == other.id && name == other.name;
    }
};

// Hash function specialization for MyStruct
namespace std {
    template <>
    struct hash<MyStruct> {
        size_t operator()(const MyStruct& s) const {
            size_t seed = 0;
            boost::hash_combine(seed, s.id);
            boost::hash_combine(seed, s.name);
            return seed;
        }
    };
}

int main() {
    // Create an unordered map with MyStruct as the key
    std::unordered_map<MyStruct, std::string> my_map;

    // Insert some data
    my_map[MyStruct{1, "Alice"}] = "Engineer";
    my_map[MyStruct{2, "Bob"}] = "Doctor";

    // Access and print data
    for (const auto& pair : my_map) {
        std::cout << "ID: " << pair.first.id
                  << ", Name: " << pair.first.name
                  << ", Occupation: " << pair.second << std::endl;
    }

    return 0;
}

