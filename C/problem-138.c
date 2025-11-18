#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int count[11] = {0};
    for (int i = 0; i < N; i++) {
        int w;
        scanf("%d", &w);
        count[w]++;
    }

    int result = 0;
    int remaining = N;
    for (int i = 1; i <= M; i++) {
        remaining -= count[i];
        result += count[i] * remaining;
    }

    printf("%d\n", result);
    return 0;
}
