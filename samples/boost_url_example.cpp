#include <boost/url.hpp>
#include <iostream>

int main() {
    // Parsing a URL
    boost::urls::url my_url("https://www.example.com/path/to/resource?query=123#fragment");

    // Accessing URL components
    std::cout << "Scheme: " << my_url.scheme() << "\n";
    std::cout << "Host: " << my_url.host() << "\n";
    std::cout << "Path: " << my_url.path() << "\n";
    std::cout << "Query: " << my_url.query() << "\n";
    std::cout << "Fragment: " << my_url.fragment() << "\n";

    // Modifying the URL
    my_url.set_path("/new/path");
    my_url.set_query("new_query=456");

    std::cout << "Modified URL: " << my_url << "\n";

    return 0;
}
