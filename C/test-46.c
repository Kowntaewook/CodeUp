#include <stdio.h>
int main()
{
    int i = 1;

    while(100 > i)
    {
        i++;
        if(i % 2 == 0)
        {
            printf("%d - 짝수\n", i);
        }
        else
        {
            printf("%d - 홀수\n", i);
        }
    }
    return 0;
}