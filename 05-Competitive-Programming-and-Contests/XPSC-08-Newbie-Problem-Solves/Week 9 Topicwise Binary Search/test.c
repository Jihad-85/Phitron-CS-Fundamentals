#include <stdio.h>
#define INF 999
struct Edge
{
    int u, v, w;
};


// Function to find the parent node (Union-Find)
int findParent(int parent[], int i)
{
    if (parent[i] == i)
        return i;
    return findParent(parent, parent[i]);
}
// Function to perform the union of two subsets
void unionSet(int parent[], int u, int v)
{
    int pu = findParent(parent, u);
    int pv = findParent(parent, v);
    parent[pu] = pv;
}
int main()
{
    int n;
    printf("Enter number of Connections: ");
    scanf("%d", &n);
    int graph[n][n];
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }
    struct Edge edges[n * n];
    int edgeCount = 0;
    // Extracting all valid edges from the adjacency matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (graph[i][j] != 0 && graph[i][j] != INF)
            {
                edges[edgeCount].u = i;
                edges[edgeCount].v = j;
                edges[edgeCount].w = graph[i][j];
                edgeCount++;
            }
        }
    }
    // Sorting edges based on weight (ascending order)
    for (int i = 0; i < edgeCount - 1; i++)
    {
        for (int j = 0; j < edgeCount - i - 1; j++)
        {
            if (edges[j].w > edges[j + 1].w)
            {
                struct Edge temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
    int parent[n];
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
    }
    int totalCost = 0, edgeUsed = 0;
    printf("Minimum Cost:\n");
    // Applying Kruskal's Algorithm
    for (int i = 0; i < edgeCount; i++)
    {
        int pu = findParent(parent, edges[i].u);
        int pv = findParent(parent, edges[i].v);
        if (pu != pv)
        {
            unionSet(parent, pu, pv);
            totalCost += edges[i].w;
            edgeUsed++;
            printf("%d edge (%d,%d) = %d\n", edgeUsed, edges[i].u + 1, edges[i].v + 1, edges[i].w);
        }
    }

    printf("Total = %d\n", totalCost);
    return 0;
}
