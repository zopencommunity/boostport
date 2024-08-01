#include <iostream>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>
#include <boost/algorithm/cxx11/any_of.hpp>
#include <boost/algorithm/cxx11/all_of.hpp>
#include <boost/algorithm/cxx11/none_of.hpp>
#include <boost/algorithm/cxx11/is_sorted.hpp>
#include <boost/algorithm/cxx11/copy_if.hpp>

int main() {
    // String Algorithms
    std::string s = "  Boost Algorithm Library Example  ";

    // Trim
    std::string trimmed = s;
    boost::algorithm::trim(trimmed);
    std::cout << "Trimmed: '" << trimmed << "'\n";

    // Case Conversion
    std::string lower = s;
    boost::algorithm::to_lower(lower);
    std::cout << "Lowercase: '" << lower << "'\n";

    std::string upper = s;
    boost::algorithm::to_upper(upper);
    std::cout << "Uppercase: '" << upper << "'\n";

    // Replace
    std::string replaced = s;
    boost::algorithm::replace_all(replaced, " ", "_");
    std::cout << "Replaced: '" << replaced << "'\n";

    // Split
    std::vector<std::string> split;
    boost::algorithm::split(split, s, boost::is_space());
    std::cout << "Split: ";
    for (const auto& word : split) {
        std::cout << "'" << word << "' ";
    }
    std::cout << "\n";

    // Join
    std::string joined = boost::algorithm::join(split, "-");
    std::cout << "Joined: '" << joined << "'\n";

    // Contains
    bool contains_library = boost::algorithm::contains(s, "Library");
    std::cout << "Contains 'Library': " << std::boolalpha << contains_library << "\n";

    // Case Insensitive Comparison
    bool case_insensitive_equal = boost::algorithm::iequals(s, "  BOOST ALGORITHM LIBRARY EXAMPLE  ");
    std::cout << "Case insensitive equal: " << std::boolalpha << case_insensitive_equal << "\n";

    // Starts With
    bool starts_with_boost = boost::algorithm::starts_with(trimmed, "Boost");
    std::cout << "Starts with 'Boost': " << std::boolalpha << starts_with_boost << "\n";

    // Ends With
    bool ends_with_example = boost::algorithm::ends_with(trimmed, "Example");
    std::cout << "Ends with 'Example': " << std::boolalpha << ends_with_example << "\n";

    // Find First
    auto first_occurrence = boost::algorithm::find_first(trimmed, "Algorithm");
    std::cout << "First occurrence of 'Algorithm': '" << std::string(first_occurrence.begin(), first_occurrence.end()) << "'\n";

    // Find Last
    auto last_occurrence = boost::algorithm::find_last(trimmed, "Example");
    std::cout << "Last occurrence of 'Example': '" << std::string(last_occurrence.begin(), last_occurrence.end()) << "'\n";

    // Utility Algorithms
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6};

    // Any Of
    bool has_even = boost::algorithm::any_of(numbers, [](int n) { return n % 2 == 0; });
    std::cout << "Has even number: " << std::boolalpha << has_even << "\n";

    // All Of
    bool all_positive = boost::algorithm::all_of(numbers, [](int n) { return n > 0; });
    std::cout << "All positive: " << std::boolalpha << all_positive << "\n";

    // None Of
    bool none_negative = boost::algorithm::none_of(numbers, [](int n) { return n < 0; });
    std::cout << "None negative: " << std::boolalpha << none_negative << "\n";

    // Is Sorted
    bool is_sorted = boost::algorithm::is_sorted(numbers);
    std::cout << "Is sorted: " << std::boolalpha << is_sorted << "\n";

    // Copy If
    std::vector<int> even_numbers;
    boost::algorithm::copy_if(numbers, std::back_inserter(even_numbers), [](int n) { return n % 2 == 0; });
    std::cout << "Even numbers: ";
    for (int n : even_numbers) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}

