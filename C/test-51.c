#include <stdio.h>
int main()
{
    int n ,m;
    scanf("%d %d", &n, &m);
    int inputrow[m];

    int first = -2147483648;
    int min = -2147483648;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d ", &inputrow[n]);
        }
    }

    for(int k = 0; k < n; k++)
    {
        for(int l = 0; l < m; l++)
        {
            first = min;
            min = inputrow[n];
        }
    }

    printf("%d\n", min);

    return 0;
}