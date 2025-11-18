/*입력 조건 : 첫째 줄에 정수 X가 주어진다.
출력 조건 : 첫째 줄에 연산을 하는 횟수의 최솟값을 출력한다.
입력 : 26
출력 : 3*/

#include <stdio.h>

// dp 로 구현하기
int main()
{
    int x;
    scanf("%d", &x);

    int dp[1000001] = {0};

    for(int i = 2; i <= x; i++)
    {
        dp[i] = dp[i - 1] + 1; 
        if(i % 2 == 0)
        {
            if(dp[i] > dp[i / 2] + 1)
                dp[i] = dp[i / 2] + 1;
        }
        if(i % 3 == 0)
        {
            if(dp[i] > dp[i / 3] + 1)
                dp[i] = dp[i / 3] + 1;
        }
        if(i % 5 == 0)
        {
            if(dp[i] > dp[i / 5] + 1)
                dp[i] = dp[i / 5] + 1;
        }
    }
    printf("%d\n", dp[x]);
    return 0;
}