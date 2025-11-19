#include <stdio.h>

#define row 3
#define col 4

int main()
{
    int i,j;
    int a[row][col];

    for(i = 0; i < col; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0; i<row; i++)
    {
        int max=a[i][0];
        for(j = 1; j < col; j ++)
        {
            if(a[i][j] > max)
                max = a[i][j];
        }
    }
    printf("%d 의 최대값은= %d\n", i + 1, max);
    return 0;
}