#ifndef DFS_H
#define DFS_H

#include <iostream>
#include <list>
#include <vector>

class DFS {
private:
    int vertices; // Number of vertices
    std::list<int> *adj; // Pointer to an array for adjacency lists
    std::vector<bool> visited; // Vector to keep track of visited vertices

    // DFS Utility Function
    void DFSUtil(int vertex);

public:
    // Constructor
    DFS(int vertices);

    // Function to add an edge
    void addEdge(int v, int w);

    // Function to execute DFS
    void runDFS(int startVertex);
};

#endif // DFS_H
