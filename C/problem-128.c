#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    scanf("%d", &m);
    
    int *berries = (int *)malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &berries[i]);
    }

    scanf("%d", &n);

   
    int *juice = (int *)malloc(sizeof(int) * m);
    int *raw = (int *)malloc(sizeof(int) * m);
    int *pie = (int *)malloc(sizeof(int) * m);
    int j1=0, j2=0, j3=0;

    for (int i = 0; i < m; i++) {
        if (berries[i] < n)
            juice[j1++] = berries[i];
        else if (berries[i] == n)
            raw[j2++] = berries[i];
        else
            pie[j3++] = berries[i];
    }

    
    for (int i = 0; i < j1; i++) 
        printf("%d ", juice[i]);
    for (int i = 0; i < j2; i++) 
        printf("%d ", raw[i]);
    for (int i = 0; i < j3; i++) 
        printf("%d ", pie[i]);
    printf("\n");

    free(berries);
    free(juice);
    free(raw);
    free(pie);
    return 0;
}
