/*피보나치 수열이란 앞의 두 수를 더하여 나오는 수열이다.

첫 번째 수와 두 번째 수는 모두 
1
이고, 세 번째 수부터는 이전의 두 수를 더하여 나타낸다. 피보나치 수열을 나열해 보면 다음과 같다.

 

1
,
1
,
2
,
3
,
5
,
8
,
13
…

 

자연수 
N
을 입력받아 
N
번째 피보나치 수를 출력하는 프로그램을 작성하시오.

단, 
N
이 커질 수 있으므로 출력값에 
10
,
009
를 나눈 나머지를 출력한다.

※ 이 문제는 반드시 재귀함수를 이용하여 작성 해야한다.

금지 키워드 : while goto for
입력
자연수 
N
이 입력된다. (
N
은 
200
보다 같거나 작다.)

출력
N
번째 피보나치 수를 출력하되, 
10
,
009
를 나눈 나머지 값을 출력한다.

입력 예시   
7

출력 예시
13 */

// time limit exceeded
// 더 효율적인 O(N)(단일 for)이나 O(NlgN) 알고리즘으로 다시 설계

//use dp

#include <stdio.h>

#define MOD 10009

int fibo(int n, int dp[])
{
    if(n == 1 || n == 2)
        return 1;
    if(dp[n] != 0)
        return dp[n];
    dp[n] = (fibo(n - 1, dp) + fibo(n - 2, dp)) % MOD;
    return dp[n];
}

int main()
{
    int n;
    scanf("%d", &n);

    int dp[201] = {0};
    int result = fibo(n, dp);

    printf("%d\n", result);
    return 0;
}