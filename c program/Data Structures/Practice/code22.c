#include <stdio.h>

// Maximum number of vertices in the graph
#define MAX_VERTICES 100

// Function to check if there is a path from v1 to v2 in the directed graph
int isPathExists(int graph[MAX_VERTICES][MAX_VERTICES], int v1, int v2, int vertices) {
    // Base case: If there is a direct edge from v1 to v2
    if (graph[v1][v2] == 1)
        return 1;

    // Check for a path using DFS
    for (int i = 0; i < vertices; i++) {
        if (graph[v1][i] == 1 && isPathExists(graph, i, v2, vertices))
            return 1;
    }

    // No path found
    return 0;
}

int main() {
    int vertices, edges;

    // Input the number of vertices and edges
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    int graph[MAX_VERTICES][MAX_VERTICES] = {0};

    // Input the edges using adjacency matrix
    printf("Enter the edges (format: v1 v2):\n");
    for (int i = 0; i < edges; i++) {
        int v1, v2;
        scanf("%d %d", &v1, &v2);
        graph[v1][v2] = 1;
    }

    int v1, v2;

    // Input the vertices to check for a path
    printf("Enter two vertices to check for a path (format: v1 v2): ");
    scanf("%d %d", &v1, &v2);

    // Check and print if there is a path from v1 to v2
    if (isPathExists(graph, v1, v2, vertices))
        printf("Yes, there is a path from %d to %d.\n", v1, v2);
    else
        printf("No, there is no path from %d to %d.\n", v1, v2);

    return 0;
}
