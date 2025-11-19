#include <stdio.h>
int main(){
    int num=0;

    printf("숫자 입력: ");
    scanf("%d", &num);

    if(num % 3 == 0){
        printf("3의 배수 입니다.");
    }
    else{
        printf("3의 배수 아닙니다.");
    }
    return 0;
}