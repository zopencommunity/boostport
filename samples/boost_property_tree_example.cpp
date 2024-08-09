#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <iostream>

int main() {
    using namespace boost::property_tree;

    // Create a property tree object
    ptree pt;

    try {
        // Load JSON data from a file into the property tree
        read_json("metadata.json", pt);

        // Safely access nodes using get_optional
        auto name = pt.get_optional<std::string>("name");
        if (name) {
            std::cout << "Name: " << *name << "\n";
        } else {
            std::cout << "Name node not found\n";
        }

        auto age = pt.get_optional<int>("age");
        if (age) {
            std::cout << "Age: " << *age << "\n";
        } else {
            std::cout << "Age node not found\n";
        }

        // Print the entire property tree for debugging purposes
        std::cout << "Full Property Tree:\n";
        for (const auto& pair : pt) {
            std::cout << pair.first << ": " << pair.second.data() << "\n";
        }

    } catch (const ptree_bad_path& e) {
        std::cerr << "ptree_bad_path exception: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

