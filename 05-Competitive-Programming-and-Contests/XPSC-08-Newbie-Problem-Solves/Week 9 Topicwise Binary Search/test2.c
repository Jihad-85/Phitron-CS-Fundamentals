#include <stdio.h>
#define INF 999
int main()
{


    int n;
    printf("Enter number of Clients: ");
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
    int selected[n];
    for (int i = 0; i < n; i++)
    {
        selected[i] = 0;
    }
    selected[0] = 1; // Start from the first client
    int edgeCount = 0, totalCost = 0;
    printf("Minimum Cost:\n");
    // Applying Prim's Algorithm
    while (edgeCount < n - 1)
    {
        int u = -1, v = -1;
        int min = INF;
        for (int i = 0; i < n; i++)
        {
            if (selected[i])
            {
                for (int j = 0; j < n; j++)
                {
                    if (!selected[j] && graph[i][j] < min)
                    {
                        min = graph[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }
        if (u != -1 && v != -1)
        {
 printf("Edge %d: (%d,%d) Cost = %d\n", edgeCount + 1, u + 1, v + 1,
 totalCost += min);

 selected[v] = 1;
 edgeCount++;
        }
    }
    printf("Minimum Cost: %d\n", totalCost);
    return 0;
}
