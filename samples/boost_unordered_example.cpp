#include <iostream>
#include <boost/unordered_map.hpp>

int main() {
    // Define an unordered_map with integer keys and string values
    boost::unordered_map<int, std::string> my_map;

    // Insert some key-value pairs into the unordered_map
    my_map[1] = "One";
    my_map[2] = "Two";
    my_map[3] = "Three";

    // Iterate over the unordered_map and print its contents
    for (const auto& pair : my_map) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}

