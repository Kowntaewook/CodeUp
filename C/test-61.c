//정수 n을 입력받아 펙토리얼(n!)을 반환하는 함수를 작성

#include <stdio.h>

// 펙토리얼 함수

void factorial(int n, int *result)
{
    *result = 1;
    for(int i = 1; i <= n; i++)
    {
        *result *= i;
    }
}

int main()
{
    int n, result;
    scanf("%d", &n);

    factorial(n, &result);
    printf("%d\n", result);
    return 0;
}