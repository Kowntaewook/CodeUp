#include <stdio.h>

int main()
{
    int num1, num2;
    int result = 1; // 초기화 꼭 필요

    scanf("%d %d", &num1, &num2);

    for(int i = 0; i < num2; i++)
    {
        result *= num1;
    }

    printf("%d", result);

    return 0;
}
