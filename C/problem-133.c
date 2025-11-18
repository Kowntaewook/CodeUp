#include <stdio.h>
#include <string.h>

#define MAXN 300000

int N, Q;
char map[2][MAXN + 5];
int grundy[MAXN + 1];  
int xor_sum = 0;        


int gval(int i) {
    if (i % 3 == 1) return 1;
    if (i % 3 == 2) return 2;
    return 0;
}


void init() {
    for (int i = 1; i <= N; i++)
        grundy[i] = gval(i);
    
    
    xor_sum = 0;
    for (int i = 0; i < N; i++) {
        if (map[0][i] == '.') xor_sum ^= grundy[i + 1];
        if (map[1][i] == '.') xor_sum ^= grundy[i + 1];
    }
}

int main() {
    scanf("%d %d", &N, &Q);
    scanf("%s", map[0]);
    scanf("%s", map[1]);

    init();

    for (int q = 0; q < Q; q++) {
        int op, y, x;
        scanf("%d %d %d", &op, &y, &x);
        y--; x--; 

        if (op == 1) {
            if (map[y][x] == '.') {
                xor_sum ^= grundy[x + 1];
                map[y][x] = '#';
            } else {
                xor_sum ^= grundy[x + 1];
                map[y][x] = '.';
            }
        } else {
            if (xor_sum == 0) 
                printf("Turtle\n");
            else 
                printf("Kaorin\n");
        }
    }
    return 0;
}
