
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int i, v, a, b;
    int graph[101][101];
    int dist[101];
    int visited[101];
    const int INF = 1000000000;

    if (scanf("%d %d", &n, &m) != 2) return 0;

    for (i = 1; i <= n; i++)
    {
        for (v = 1; v <= n; v++)
        {
            graph[i][v] = 0;
        }
    }

    for (i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    for (i = 1; i <= n; i++)
    {
        dist[i] = INF;
        visited[i] = 0;
    }
    dist[1] = 0;

    for (i = 1; i <= n; i++)
    {
        int u = -1;
        int best = INF;
        for (v = 1; v <= n; v++)
        {
            if (!visited[v] && dist[v] < best)
            {
                best = dist[v];
                u = v;
            }
        }

        if (u == -1)
        {
            break;
        }

        visited[u] = 1;

        for (v = 1; v <= n; v++)
        {
            if (graph[u][v] && !visited[v])
            {
                if (dist[u] + 1 < dist[v])
                {
                    dist[v] = dist[u] + 1;
                }
            }
        }
    }

    int ans = 0;
    for (i = 2; i <= n; i++)
    {
        if (dist[i] < INF)
        {
            ans++;
        }
    }

    printf("%d", ans);
    return 0;
}

