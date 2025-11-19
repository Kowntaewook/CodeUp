//다음과 같은 수열에서 n값을 입력받아 그 결과를 출력하시오.

//1 + ( 1 + 2 ) + ( 1 + 2 + 3 ) + ( 1 + 2 + 3 + 4 ) + ㆍㆍ+ ( 1 + 2 + ㆍㆍ+ n )

//입력 설명
//정수 n이 입력됩니다.

//단, n의 범위는 1 ≤ n ≤ 1000입니다

//출력 설명
//결과를 출력합니다.

//입력 예시 Copy
//5
//출력 예시 Copy
//35

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            sum += j + 1;
        }
    }
    printf("%d\n", sum);
    return 0;
}