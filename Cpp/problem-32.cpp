/*기출: ACM-ICPC 화성 탐사
입력 조건: 첫째 줄에 테스트 케이스의 개수 T가 주어짐 1 <= T <= 10
매 테스트 케이스마다 첫째 줄에는 탐사 공간의 크기를 의미하는 정수 N이 주어짐 2 <= N <= 125
이어서 N개의 줄에 걸쳐 각 칸의 비용이 주어지며 공백으로 구분함 0 <= 각 칸의 비용 <= 9
출력 조건 : 각 테스트 케이스마다 [0][0]의 위치에서 [N-1][N-1]의 위치로 이동하는 최소 비용을 한줄에 하나씩 출력

3
3
5 5 4
3 9 1
3 2 7
5
3 7 2 0 1
2 8 0 9 1
1 2 1 8 1
9 8 9 2 0
3 6 5 1 5
7
9 0 5 1 1 5 3
4 1 2 1 6 5 3
0 7 6 1 6 8 5
1 9 7 8 3 2 3
9 4 0 7 6 4 1
5 8 3 2 4 8 3
7 4 8 4 8 3 4

출력 예시: 20
         19
         36
*/

#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;

int T, N;
int cost[125][125];
int dist[125][125];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

priority_queue<pair<int, pair<int, int>>> pq;
const int INF = 1e9;

void dij(int startx, int starty)
{
    dist[startx][starty] = cost[startx][starty];
    pq.push({-dist[startx][starty], {startx, starty}});

    while(!pq.empty())
    {
        int curx = pq.top().second.first;
        int cury = pq.top().second.second;
        int curcost = -pq.top().first;
        pq.pop();

        if(dist[curx][cury] < curcost) continue;

        for(int i = 0; i < 4; i++)
        {
            int nx = curx + dx[i];
            int ny = cury + dy[i];

            if(nx < 0 || nx >= N || ny < 0 || ny >= N) continue;

            int nextcost = curcost + cost[nx][ny];

            if(dist[nx][ny] > nextcost)
            {
                dist[nx][ny] = nextcost;
                pq.push({-nextcost, {nx, ny}});
            }
        }
    }

    printf("%d\n", dist[N-1][N-1]);
}

int main()
{
    scanf("%d", &T);

    while(T--)
    {
        while(!pq.empty()) pq.pop();  

        scanf("%d", &N);
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
            {
                scanf("%d", &cost[i][j]);
                dist[i][j] = INF;
            }

        dij(0, 0);
    }

    return 0;
}
