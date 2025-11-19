#include <stdio.h>
int main(){
    int num=0;
    int num2=80;

    printf("국어 점수 입력: ");
    scanf("%d", &num);

    int result=num-num2;

    printf("편차: %d", result);
    
    return 0;
}