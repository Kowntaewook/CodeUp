#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 사용자로부터 숫자 개수 입력받고 개수만큼 정수를 입력받아 오름차순으로 정렬
    int n, i, j, temp = 0;
    int *sums;
    printf("정수의 개수를 입력하세요: ");
    scanf("%d", &n);

    sums = (int *)malloc(n * sizeof(int));
    if(sums == NULL)
    {
        printf("메모리 할당 실패\n");
        return 1;
    }

    printf("%d개의 정수를 입력하세요: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &sums[i]);
    }

    // 오름 차순 정렬
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(sums[i] > sums[j])
            {
                temp = sums[i];
                sums[i] = sums[j];
                sums[j] = temp;
            }
        }
    }
    printf("오름차순 정렬: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", sums[i]);
    }
    return 0;
}