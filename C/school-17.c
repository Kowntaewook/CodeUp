#include <stdio.h>
int main(){
    int num=0;

    printf("숫자 입력: ");
    scanf("%d", &num);

    if(num == 1){
        printf("가위");
    }
    else if(num == 2){
        printf("바위");
    }
    else if(num == 3){
        printf("보");
    }
    else{
        printf("잘못된 숫자를 입력했습니다.");
    }
}