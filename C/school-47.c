#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *scores;

    // 학생 수 사용자로부터 입력 점수를 배열 저장 최고점 출력

    printf("학생 수를 입력하세요: ");
    scanf("%d", &n);

    scores = (int *)malloc(n * sizeof(int));

    if(scores == NULL)
    {
        printf("메모리 할당 실패\n");
        return 1;
    }

    printf("%d명의 학생 점수를 입력하세요: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }

    // 최고점 구하기
    int max = scores[0];
    for(int j = 1; j < n; j++)
    {
        if(scores[j] > max)
        {
            max = scores[j];
        }
    }

    printf("최고 점수: %d\n", max);

    return 0;
}