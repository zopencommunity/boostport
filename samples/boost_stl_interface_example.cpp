#include <iterator>
#include <vector>
#include <iostream>

class CustomIterator : public std::iterator<std::random_access_iterator_tag, int> {
    int* ptr_;
public:
    explicit CustomIterator(int* ptr) : ptr_(ptr) {}

    int& operator*() const { return *ptr_; }
    CustomIterator& operator++() { ++ptr_; return *this; }
    CustomIterator operator++(int) { CustomIterator temp = *this; ++ptr_; return temp; }
    CustomIterator& operator--() { --ptr_; return *this; }
    CustomIterator operator--(int) { CustomIterator temp = *this; --ptr_; return temp; }
    bool operator==(const CustomIterator& other) const { return ptr_ == other.ptr_; }
    bool operator!=(const CustomIterator& other) const { return ptr_ != other.ptr_; }
    CustomIterator& operator+=(std::ptrdiff_t n) { ptr_ += n; return *this; }
    CustomIterator& operator-=(std::ptrdiff_t n) { ptr_ -= n; return *this; }
    std::ptrdiff_t operator-(const CustomIterator& other) const { return ptr_ - other.ptr_; }
    int& operator[](std::ptrdiff_t n) const { return ptr_[n]; }
};

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    CustomIterator it_begin(vec.data());
    CustomIterator it_end(vec.data() + vec.size());

    for (auto it = it_begin; it != it_end; ++it) {
        std::cout << *it << " ";
    }

    return 0;
}

