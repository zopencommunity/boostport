#include <boost/graph/adjacency_list.hpp>
#include <iostream>

int main() {
    // Define a directed graph with integer vertices
    typedef boost::adjacency_list<boost::vecS, boost::vecS, boost::directedS> Graph;

    // Add vertices to the graph
    Graph g(3);  // Create a graph with 3 vertices

    // Add edges to the graph
    boost::add_edge(0, 1, g);
    boost::add_edge(1, 2, g);
    boost::add_edge(2, 0, g);

    // Print out all vertices in the graph
    std::cout << "Vertices in the graph:" << std::endl;
    Graph::vertex_iterator vi, vend;
    for (boost::tie(vi, vend) = boost::vertices(g); vi != vend; ++vi) {
        std::cout << *vi << std::endl;
    }

    // Print out all edges in the graph
    std::cout << "Edges in the graph:" << std::endl;
    Graph::edge_iterator ei, eend;
    for (boost::tie(ei, eend) = boost::edges(g); ei != eend; ++ei) {
        std::cout << *ei << std::endl;
    }

    return 0;
}

