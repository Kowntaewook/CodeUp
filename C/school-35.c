#include <stdio.h>
int main()
{
    int i = 0, sum = 0;

    while(i<10)
    {
        i++;
        if(i % 2 == 0)
        {
            sum+=i;
        }
    }
    printf("%d", sum);
    
    return 0;
}