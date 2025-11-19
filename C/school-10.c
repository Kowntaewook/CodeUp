#include <stdio.h>
int main(){
    int num=0;
    int num2=0;
    int num3=0;
    float sum;

    printf("국어 점수 입력:");
    scanf("%d", &num);
    printf("영어 점수 입력:");
    scanf("%d", &num2);
    printf("수학 점수 입력:");
    scanf("%d", &num3);

    sum=(num+num2+num3)/3;

    printf("%.1f\n", sum);

    return 0;
}