#include <stdio.h>
int main()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    int result = (2000*num1) + (3000*num2) + (3500 * num3);

    if(result >= 10000)
    {
        printf("%d", result - result / 10);
    }
    else
    {
        printf("%d", result);
    }


    return 0;
}