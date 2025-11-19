#include <stdio.h>
int main()
{
    int i,j = 0;
    int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8};
    for(i = 0; i<= 7; i++)
    {
        j += (j && a[i] <= 3);
    }
    printf("%d", j);
    return 0;
}