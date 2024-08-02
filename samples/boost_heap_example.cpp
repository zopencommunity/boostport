#include <iostream>
#include <boost/heap/priority_queue.hpp>

int main() {
    // Define a priority queue with a binary heap
    typedef boost::heap::priority_queue<int> MaxHeap;

    // Create a priority queue instance
    MaxHeap heap;

    // Add elements to the heap
    heap.push(5);
    heap.push(1);
    heap.push(3);
    heap.push(7);
    heap.push(2);

    // Print and remove elements from the heap
    while (!heap.empty()) {
        std::cout << "Top element: " << heap.top() << std::endl;
        heap.pop();
    }

    return 0;
}

