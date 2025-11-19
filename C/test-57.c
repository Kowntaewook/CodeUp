#include <stdio.h>

// 3개의 정수를 입력받아 가장 큰수를 반환하는 함수 작성

int find_max(int a, int b, int c)
{
    int max = a;

    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }
    return max;
}

int main()
{
    int a, b, c;
    printf("세 개의 정수 입력: ");
    scanf("%d %d %d", &a, &b, &c);

    int max_value = find_max(a, b, c);

    printf("가장 큰 수: %d\n", max_value);
    return 0;
}