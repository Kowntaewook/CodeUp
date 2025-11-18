/*문제 설명
어떤 주차장에 n개의 주차 공간이 있고, 각 주차 공간의 바닥에는 1부터 n까지의 번호가 쓰여있다.
다음은 주차 공간이 22개인 주차장의 모습이다.




다음 그림은 첫째 날 9시의 주차 공간 상태이다.

 




다음 그림은 둘째 날 9시의 주차 공간 상태이다.

 




주차 공간이 n개인 주차장에 대하여 이틀간의 주차 상태를 입력 받아, 이틀 동안 모두 사용되지 않은 주차 공간의 개수와 이틀 동안 모두 사용된 주차 공간의 개수를 출력해보자.

입력
첫 번째 줄에 주차 공간의 개수(n), 첫 째 날에 주차된 차량의 수(a), 둘 째 날에 주차된 차량의 수(b)가 스페이스로 구분되어 입력된다.
두 번째 줄에 첫 째날 사용된 주차 공간의 번호(ai)가 스페이스로 구분되어 입력된다.
세 번째 줄에 둘 째날 사용된 주차 공간의 번호(bi)가 스페이스로 구분되어 입력된다.
[1<=n<=100]
[1<=a,b<=n]
[1<=ai,bi<=n]
 

출력
이틀 동안 모두 사용되지 않은 주차 공간의 개수와 이틀 동안 모두 사용된 주차 공간의 개수를 스페이스를 사이에 두고 한 줄로 출력한다.
 

입력 예시   
10 3 8
1 3 5
1 2 4 5 7 8 9 10

출력 예시
1 2*/

#include <stdio.h>

#define INF 1e9
#define MAX 101

int graph[MAX][MAX];
int n, a, b;

int count_unused = 0;
int count_used = 0;
int parking[MAX];

void floyd()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            for(int k = 1; k <= n; k++)
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
    scanf("%d %d %d", &n, &a, &b);

    for(int i = 1; i <= n; i++)
    {
        parking[i] = 0;
    }

    for(int i = 0; i < a; i++)
    {
        int p;
        scanf("%d", &p);
        parking[p] += 1;
    }
    for(int i = 0; i < b; i++)
    {
        int p;
        scanf("%d", &p);
        parking[p] += 1;
    }
    for(int i = 1; i <= n; i++)
    {
        if(parking[i] == 0)
            count_unused += 1;
        if(parking[i] == 2)
            count_used += 1;
    }
    printf("%d %d\n", count_unused, count_used);
    return 0;
}