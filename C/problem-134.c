#include <stdio.h>
#include <stdlib.h>

int compare(int *a, int *b) {
    if (*a < *b) 
        return -1;
    else if (*a > *b) 
        return 1;
    else 
        return 0;
}

int main() {
    int N, i;
    scanf("%d", &N);
    int fear[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &fear[i]);
    }

    int j, temp;
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - 1 - i; j++) {
            if (fear[j] > fear[j + 1]) {
                temp = fear[j];
                fear[j] = fear[j + 1];
                fear[j + 1] = temp;
            }
        }
    }

    int group_count = 0;
    int member_count = 0;
    for (i = 0; i < N; i++) {
        member_count++;
        if (member_count >= fear[i]) {
            group_count++;
            member_count = 0;
        }
    }

    printf("%d\n", group_count);
    return 0;
}
