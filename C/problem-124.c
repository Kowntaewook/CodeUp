/*입력 조건 : 첫째 줄에 도시의 개수 N 통로의 개수 M 메시지를 보내고자하는 도시 C가 주어진다.
1 <= M <= 30000 1 <= M <= 200000 1 <= C <= N
둘째 줄부터 M + 1번째 줄에 걸쳐서 통로에 대한 정보 X, Y, Z가 주어진다 이는 특정 도시 X에서 다른 특정 도시 Y로 이어지는 통로가 있으며 메시지가 전달되는 시간이 Z라는 의미이다.
1 <= X Y <= N 1 <= Z <= 1000
출력 조건 : 첫째 줄에 도시 C에서 보낸 메시지를 받는 도시의 총 개수와 총 걸리는 시간을 공백으로 구분하여 출력한다.

3 2 1
1 2 4
1 3 2

2 4*/

#include <stdio.h>

#define INF 1e9
#define MAX 101

int graph[MAX][MAX];
int N, M;
int C;
int count = 0;
int time = 0;

void floyd()
{
    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            for(int k = 1; k <= N; k++)
            {
                if(graph[j][k] > graph[j][i] + graph[i][k])
                {
                    graph[j][k] = graph[j][i] + graph[i][k];
                }
            }
        }
    }
}

int main()
{
    scanf("%d %d %d", &N, &M, &C);

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= N; j++)
        {
            if(i == j)
                graph[i][j] = 0;
            else
                graph[i][j] = INF;
        }
    }

    for(int i = 0; i < M; i++)
    {
        int a, b, z;
        scanf("%d %d %d", &a, &b, &z);
        graph[a][b] = z;
        graph[b][a] = z;
    }

    floyd();

    for(int i = 1; i <= N; i++)
    {
        if(i != C && graph[C][i] != INF)
        {
            count++;
            if(time < graph[C][i])
                time = graph[C][i];
        }
    }
    printf("%d %d\n", count, time);

    return 0;
}