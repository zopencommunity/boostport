#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <fstream>
#include <iostream>

// Example class to serialize
class MyData {
public:
    MyData() : value(0) {}
    MyData(int v) : value(v) {}

    int getValue() const { return value; }

private:
    friend class boost::serialization::access;

    template <typename Archive>
    void serialize(Archive& ar, const unsigned int version) {
        ar & value;
    }

    int value;
};

int main() {
    // Create an object to serialize
    MyData data(42);

    // Serialize the object to a file
    {
        std::ofstream ofs("data.txt");
        boost::archive::text_oarchive ar(ofs);
        ar << data;
    }

    // Deserialize the object from the file
    MyData loaded_data;
    {
        std::ifstream ifs("data.txt");
        boost::archive::text_iarchive ar(ifs);
        ar >> loaded_data;
    }

    // Output the loaded data
    std::cout << "Loaded value: " << loaded_data.getValue() << std::endl;

    return 0;
}

