// floyd-Warshall algorithm
#include <stdio.h>
#define INF 1000000
#define MAX 101

int graph[MAX][MAX];
int N, M;

void floyd()
{
    for(int k = 1; k <= N; k++)
        for(int i = 1; i <= N; i++)
            for(int j = 1; j <= N; j++)
                if(graph[i][j] > graph[i][k] + graph[k][j])
                    graph[i][j] = graph[i][k] + graph[k][j];
}

int main()
{
    scanf("%d %d", &N, &M);

    int i, j;

    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= N; j++);
            if(i == j)
                graph[i][j] = 0;
            else
                graph[i][j] = INF;
    
    for(int i = 0; i < M; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    floyd();
    int ans = 0, min = INF;
    for(int i = 1; i <= N; i++)
    {
        int sum = 0;
        for(int j = 1; j <= N; j++)
            sum += graph[i][j];
        if(sum < min)
        {
            min = sum;
            ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}