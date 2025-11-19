#include <stdio.h>
int main()
{
    int scores[5];
    int i, sum =0;
    float average;

    printf("5개의 정수를 입력하세요");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }
    average = sum / 5.0;
    printf("평균 점수: %.1f\n", average);
    return 0;
}