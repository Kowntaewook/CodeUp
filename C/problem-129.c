
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    int wins[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
            wins[i][j] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        wins[a][b] = 1;
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (!wins[i][k]) 
                continue;
            for (int j = 1; j <= n; j++)
            {
                if (wins[k][j])
                    wins[i][j] = 1;
            }
        }
    }

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int known = 1;
        for (int j = 1; j <= n; j++)
        {
            if (i == j) 
                continue;
            if (!wins[i][j] && !wins[j][i])
            {
                known = 0;
                break;
            }
        }
        if (known) count++;
    }

    printf("%d", count);
    return 0;
}
