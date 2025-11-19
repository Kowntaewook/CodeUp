#include <stdio.h>
int main()
{

    int a = 6;
    int b = 0;
    int sum = 1;

    while(a < 10)
    {
        a++;
        if(a % 2 == 0)
        {
            sum += 2;
        }
        else
        {
            sum *= 2;
        }
    }

    switch (a % 2)
    {
    case 0:
        sum++;
    case 1:
        sum--;
    
    default:
        printf("오류");
    }
    printf("%d %d", sum, a);
    
    return 0;
}