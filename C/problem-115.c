#include <stdio.h>

#define MOD 100000000

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int dp[51][51] = {0};

    for (int i = 1; i <= r; i++) dp[i][1] = 1;
    for (int j = 1; j <= c; j++) dp[1][j] = 1;

    for (int i = 2; i <= r; i++) {
        for (int j = 2; j <= c; j++) {
            dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
        }
    }

    printf("%d\n", dp[r][c]);
    return 0;
}
