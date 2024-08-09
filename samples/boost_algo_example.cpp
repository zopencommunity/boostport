#include <iostream>
#include <boost/algorithm/string.hpp>

int main() {
    std::string text = "Boost C++ Libraries are powerful!";
    
    // Find and replace "powerful" with "amazing"
    boost::algorithm::replace_all(text, "powerful", "amazing");
    
    std::cout << "Modified text: " << text << std::endl;
    
    return 0;
}

