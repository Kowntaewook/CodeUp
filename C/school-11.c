#include <stdio.h>
int main(){

    float num=0;
    float num2=0;

    printf("몸무게를 입력하세요: \n");
    scanf("%f", &num);
    printf("키를 입력하세요: \n");
    scanf("%f", &num2);

    float result;
    num2=num2/100;

    result=num/(num2*num2);

    printf("bmi 수치: %.2f\n", result);


    return 0;
}