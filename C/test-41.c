
#include <stdio.h>
int main()
{
    int h, m, k, n;
    scanf("%d %d %d %d", &h, &m, &k, &n);

    int time = 0;

    if(k == 1)
    {
        time = (n - 1) / 50 * 2 + (n - 1) % 50;
    }
    else
    {
        time = (n - 1) / 50 * 2 + (n - 1) % 50 + 50;
    }
    m += time;
    h += m / 60;
    m = m % 60;
    h = h % 24;
    printf("%d %d\n", h , m);
    return 0;
}