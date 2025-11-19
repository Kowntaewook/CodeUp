#include <stdio.h>
int main()
{
    // 21 22 23 24 25
    // 16 17 18 19 20
    // 11 12 13 14 15
    // 6 7 8 9 10
    // 1 2 3 4 5
    int j;
    for(int i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j); 
        }
        printf("\n");
    }
    return 0;
}