/*문제 설명    
알바왕 비버가 한라봉 상자 포장 아르바이트를 한다.
상자의 크기는 용량에 따라 4종류(1kg, 3kg, 5kg, 10kg)로 나뉘는데, 반드시 상자의 용량만큼 한라봉을 담아야 한다.
즉, 상자의 용량보다 부족하거나 초과하여 한라봉을 담을 수 없다.
또한, 상자를 최소한으로 사용해서 한라봉을 포장해야 한다.
예를 들어, 3kg의 한라봉을 포장하기 위해서는 1kg 상자 3개가 아닌, 3kg 상자 1개를 사용해야 한다.
 




비버가 n kg의 한라봉을 모두 포장하려면, 최소 몇 개의 상자가 필요할까?
 

입력
한라봉의 무게(n)가 입력된다.
[1<=n<=106]
 

출력
상자의 개수를 출력한다.
 

입력 예시   
18

출력 예시
3 */

#include <stdio.h>
#include <stdlib.h>

#define INF 1e9
#define MAX 101

int graph[MAX][MAX];
int n;
int box_count = 0;
int box_type[] = {10, 5, 3, 1};

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
    scanf("%d", &n);

    for(int i = 0; i < 4; i++)
    {
        box_count += n / box_type[i];
        n = n % box_type[i];
    }

    printf("%d\n", box_count);
    return 0;
}