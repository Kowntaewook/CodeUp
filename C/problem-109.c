// 피보나치 수열을 재귀함수로 작성하기
// 피보나치 수열을 반복문으로 만들어보기

/*#include <stdio.h>

int fib(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", fib(n));

    return 0;
} */

/*피보나치 수열을 반복문으로 작성하기
int main()
{
    int n;
    scanf("%d", &n);
    
    if(n <= 0)
    {
        printf("0\n");
    }
    else if(n == 1)
    {
        printf("1\n")
    }
    else if(n == 2)
    {
        printf("1\n");
    }
    else
    {
        int a = 0, b = 1, c;
        printf("0 1 ");
        for(int i = 2; i < n; i++)
        {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }
    return 0;
}
*/

// 탑 다운 방식인 다이나믹 프로그래밍으로 변경하기

/*#include <stdio.h>

int memo[1000]; // 충분히 큰 크기로

int fib_memo(long long int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    if (memo[n] != -1) return memo[n]; // 이미 계산된 값 사용

    memo[n] = fib_memo(n - 1) + fib_memo(n - 2);
    return memo[n];
}

int main() {
    long long int n, sum = 0;
    scanf("%lld", &n);

    for (int i = 0; i < n; i++) {
        memo[i] = -1;  // 초기화
    }

    for (int i = 0; i < n; i++) {
        sum += fib_memo(i);
    }

    printf("%lld\n", sum);

    return 0;
} */

// 바텀 업 방식으로 반복문으로 작성하기 dp 테이블 활용 

#include <stdio.h>

#define MAX 1000
long long dp[MAX];

int main()
{
    int n;
    scanf("%d", &n);

    dp[0] = 0;
    if (n == 1)
    {
        printf("0\n"); 
        return 0;
    }

    dp[1] = 1;
    long long sum = dp[0] + dp[1]; // 0 + 1

    for (int i = 2; i < n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
        sum += dp[i];
    }

    printf("%lld\n", sum);
    return 0;
}
