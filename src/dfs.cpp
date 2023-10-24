#include "../include/dfs.h"

// Constructor
DFS::DFS(int vertices) {
    this->vertices = vertices;
    adj = new std::list<int>[vertices];
    visited.resize(vertices, false);
}

// Add an edge to the graph
void DFS::addEdge(int v, int w) {
    adj[v].push_back(w);
}

// DFS utility function
void DFS::DFSUtil(int vertex) {
    visited[vertex] = true;
    std::cout << vertex << " ";

    // Recur for all the vertices adjacent to this vertex
    for (auto i = adj[vertex].begin(); i != adj[vertex].end(); ++i) {
        if (!visited[*i]) {
            DFSUtil(*i);
        }
    }
}

// Run DFS
void DFS::runDFS(int startVertex) {
    DFSUtil(startVertex);
}

