#include "../include/dfs.h"

int main() {
    DFS graph(5);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 2);
    graph.addEdge(2, 0);
    graph.addEdge(2, 3);
    graph.addEdge(3, 3);

    std::cout << "Depth First Traversal starting from vertex 2:" << std::endl;
    graph.runDFS(2);

    return 0;
}
