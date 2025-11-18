#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int x = *(int*)a;
    int y = *(int*)b;
    if (x > y) 
        return 1;
    if (x < y) 
        return -1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    int coins[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &coins[i]);

    qsort(coins, n, sizeof(int), cmp);

    long long target = 1;
    for (int i = 0; i < n; i++) {
        if (coins[i] > target)
            break;
        target += coins[i];
    }

    printf("%lld\n", target);
    return 0;
}
