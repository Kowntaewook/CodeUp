/*입력조건 : 첫째 줄에 회사의 개수 N과 경로의 개수 M이 공백으로 구분되어 차례대로 주어진다 1 <= N, M <= 100
둘째 줄부터 M + 1 번째 줄에는 연결된 두 회사의 번호가 공백으로 구분되어 주어진다.
M + 2번째 줄에는 X와 K가 공백으로 구분되어 차례대로 주어진다. 1 <= K <= 100
출력 조건 : 첫째 줄에 방문 판매원 A가 K번 회사를 거처 X번 회사로 가는 최소 이동 시간을 출력한다.
만약 X번 회사에 도달할 수 없다면 -1을 출력한다.

입력 예시
5 7
1 2
1 3
1 4
2 4
3 4
3 5
4 5
4 5

출력예시 : 3*/

#include <stdio.h>

#define INF 1e9
#define MAX 101

int graph[MAX][MAX];
int N, M;
int X, K;

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
    scanf("%d %d", &N, &M);

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
        int a, b;
        scanf("%d %d", &a, &b);
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    scanf("%d %d", &X, &K);
    floyd();
    int ans = graph[1][K] + graph[K][X];
    if(ans >= INF)
        printf("-1\n");
    else
        printf("%d\n", ans); 
    return 0;
}