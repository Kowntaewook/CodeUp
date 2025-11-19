#include <stdio.h>

void fournum(int a, int b)
{
    printf("%d %d %d %d", a+b, a-b, a*b, a/b);
}

int main()
{
    int a,b;

    scanf("%d %d", &a,&b);
    fournum(a,b);
    return 0;
}