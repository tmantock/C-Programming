#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <list>

class Graph {
    private:
        int vertex;
        std::list<int> *adj;
    public:
        Graph(int);
        void addEdge(int, int);
        void BFS(int);
};

#endif