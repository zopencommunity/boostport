#include <iostream>
#include <boost/container/vector.hpp>
#include <boost/container/stable_vector.hpp>
#include <boost/container/static_vector.hpp>
#include <boost/container/slist.hpp>
#include <boost/container/list.hpp>
#include <boost/container/deque.hpp>
#include <boost/container/set.hpp>
#include <boost/container/map.hpp>
#include <boost/container/flat_set.hpp>
#include <boost/container/flat_map.hpp>
#include <boost/container/small_vector.hpp>

int main() {
    // Vector
    boost::container::vector<int> vec = {1, 2, 3, 4, 5};
    vec.push_back(6);
    std::cout << "boost::container::vector: ";
    for (int n : vec) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    // Stable Vector
    boost::container::stable_vector<int> stable_vec = {1, 2, 3, 4, 5};
    stable_vec.push_back(6);
    std::cout << "boost::container::stable_vector: ";
    for (int n : stable_vec) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    // Static Vector
    boost::container::static_vector<int, 10> static_vec = {1, 2, 3, 4, 5};
    static_vec.push_back(6);
    std::cout << "boost::container::static_vector: ";
    for (int n : static_vec) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    // Singly Linked List
    boost::container::slist<int> slist = {1, 2, 3, 4, 5};
    slist.push_front(0);
    std::cout << "boost::container::slist: ";
    for (int n : slist) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    // Doubly Linked List
    boost::container::list<int> list = {1, 2, 3, 4, 5};
    list.push_back(6);
    std::cout << "boost::container::list: ";
    for (int n : list) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    // Deque
    boost::container::deque<int> deque = {1, 2, 3, 4, 5};
    deque.push_back(6);
    std::cout << "boost::container::deque: ";
    for (int n : deque) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    // Set
    boost::container::set<int> set = {1, 2, 3, 4, 5};
    set.insert(6);
    std::cout << "boost::container::set: ";
    for (int n : set) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    // Map
    boost::container::map<int, std::string> map;
    map[1] = "one";
    map[2] = "two";
    map[3] = "three";
    std::cout << "boost::container::map: ";
    for (const auto& p : map) {
        std::cout << "{" << p.first << ": " << p.second << "} ";
    }
    std::cout << "\n";

    // Flat Set
    boost::container::flat_set<int> flat_set = {1, 2, 3, 4, 5};
    flat_set.insert(6);
    std::cout << "boost::container::flat_set: ";
    for (int n : flat_set) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    // Flat Map
    boost::container::flat_map<int, std::string> flat_map;
    flat_map[1] = "one";
    flat_map[2] = "two";
    flat_map[3] = "three";
    std::cout << "boost::container::flat_map: ";
    for (const auto& p : flat_map) {
        std::cout << "{" << p.first << ": " << p.second << "} ";
    }
    std::cout << "\n";

    // Small Vector
    boost::container::small_vector<int, 5> small_vec = {1, 2, 3, 4, 5};
    small_vec.push_back(6);
    std::cout << "boost::container::small_vector: ";
    for (int n : small_vec) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
}

