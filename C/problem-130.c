/*농부 존은 그의 많은 농장을 탐험하는 동안 여러 놀라운 웜홀들을 발견하였다. 웜홀은 아주 특이한데, 왜냐하면 웜홀은 그것에 “들어가기 전에” 한 번에 목적지로 이동하는 일방 통행 경로이기 때문이다! 존의 각 농장은 1부터 N까지의 수로 번호가 매겨진 N(1 ≤ N ≤ 500)개의 들판과 M(1 ≤ M ≤ 2,500)개의 길, 그리고 W(1 ≤ W ≤ 200)개의 웜홀로 구성되어 있다.

존은 열렬한 시간 여행 팬이기 때문에, 어떤 들판에서 출발하여 몇몇 경로와 웜홀을 통과한 후 출발하기 전 제일 처음의 들판으로 돌아오는 것을 목표로 삼았다. 만약 이 목표를 달성한다면, 아마도 존은 자신을 만날 수 있을 것이다^-^

당신은 존이 이것이 가능한지 그 여부를 알아내는데 도움을 주려 한다. 존은 당신에게 농장의 완전한 지도 F(1 ≤ W ≤ 5)개를 제공한다. 이때 어떤 길도 통과하는 데 10,000초 이상 걸리지 않으며, 또한 존은 웜홀을 통해 10,000초 이상의 시간을 돌아올 수 없다.*/


/*입력
첫 번째 줄에 하나의 자연수 F가 입력된다. F는 주어질 농장의 개수(테스트 케이스의 개수)이다.
각 농장에 대해서, 우선 첫 줄에는 세 개의 자연수 N, M, W가 공백으로 분리되어 주어진다.
그 다음 M개의 줄에는 세 개의 자연수 S, E, T가 공백으로 분리되어 주어진다. 이 세 수는 들판 S와 들판 E를 잇는 길을 통과하는 데 T초가 걸림을 의미한다. 이때 각 들판들은 두 개 이상의 길로 연결될 수 있다.
그 다음 W개의 줄에 세 개의 자연수 S, E, T가 공백으로 분리되어 주어진다. 이 세 수는 들판 S가 시작 지점, 들판 E가 도착 지점인 웜홀을 지나면 T초 전으로 이동됨을 의미한다.

도로는 양방향 통행이 가능하지만 웜홀은 주어진 방향대로밖에 통행할 수 없다. */

/*출력
각 농장에 대해 존이 목표를 달성할 수 있으면 “YES”, 그렇지 않으면 “NO”를 출력한다(따옴표는 제외하고 출력한다).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int F;
    if (scanf("%d", &F) != 1) return 0;

    const int INF = 1000000000;

    for (int tc = 0; tc < F; tc++)
    {
        int N, M, W;
        scanf("%d %d %d", &N, &M, &W);

        int graph[N + 1][N + 1];
        for (int i = 0; i <= N; i++)
        {
            for (int j = 0; j <= N; j++)
                graph[i][j] = (i == j) ? 0 : INF;
        }

        for (int i = 0; i < M; i++)
        {
            int s, e, t;
            scanf("%d %d %d", &s, &e, &t);
            if (t < graph[s][e]) graph[s][e] = t;
            if (t < graph[e][s]) graph[e][s] = t;
        }

        for (int i = 0; i < W; i++)
        {
            int s, e, t;
            scanf("%d %d %d", &s, &e, &t);
            int w = -t;
            if (w < graph[s][e]) graph[s][e] = w;
        }

        int neg = 0;
        for (int k = 1; k <= N && !neg; k++)
        {
            for (int i = 1; i <= N && !neg; i++)
            {
                if (graph[i][k] == INF) continue;
                for (int j = 1; j <= N; j++)
                {
                    if (graph[k][j] == INF) continue;
                    int nd = graph[i][k] + graph[k][j];
                    if (nd < graph[i][j])
                        graph[i][j] = nd;
                }
                if (graph[i][i] < 0) neg = 1;
            }
        }

        if (!neg)
        {
            for (int i = 1; i <= N && !neg; i++)
                if (graph[i][i] < 0) neg = 1;
        }

        if (neg)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}