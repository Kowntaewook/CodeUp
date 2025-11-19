#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // i는 0부터 시작해서 2씩 증가하며 별을 줄이는 역할
    for (int i = 0; n - 2 * i > 0; i++) {
        // 공백 출력
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // 별 출력
        for (int k = 0; k < n - 2 * i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

