#include <boost/tokenizer.hpp>
#include <iostream>
#include <string>

int main() {
    std::string text = "Boost.Tokenizer example: splitting a string into tokens.";
    boost::tokenizer<> tok(text);

    for (const auto& token : tok) {
        std::cout << token << "\n";
    }

    return 0;
}

