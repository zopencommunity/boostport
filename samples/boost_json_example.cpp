#include <boost/json/src.hpp>
#include <iostream>


int main() {
    // JSON string
    std::string jsonStr = R"({"name": "John", "age": 30, "city": "New York"})";

    // Parse the JSON string
    boost::json::value jv = boost::json::parse(jsonStr);

    // Access and print individual elements
    std::cout << "Name: " << jv.at("name").as_string() << std::endl;
    std::cout << "Age: " << jv.at("age").as_int64() << std::endl;
    std::cout << "City: " << jv.at("city").as_string() << std::endl;

    // Modify the JSON object
    jv.as_object()["age"] = 31;

    // Serialize the JSON object back to a string
    std::string modifiedJsonStr = boost::json::serialize(jv);
    std::cout << "Modified JSON: " << modifiedJsonStr << std::endl;

    return 0;
}

