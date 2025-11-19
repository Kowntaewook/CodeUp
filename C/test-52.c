#include <stdio.h>

int main() {
    char fruits[5][20] = {"apple", "banana", "grape", "orange", "melon"};

    for (int i = 0; i < 5; i++) {
        printf("과일 %d: %s\n", i + 1, fruits[i]);
    }

    return 0;
}
