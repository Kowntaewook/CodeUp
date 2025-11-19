#include <stdio.h>
int main(){
    int year, born;
    char check;
    printf("현재 연도를 입력하세요: ");
    scanf("%d", &year);
    printf("출생 연도를 입력하세요: ");
    scanf("%d", &born);

    printf("생일이 지났습니까?(Y/N): ");
    scanf("%c", &check);

    if(check == 'Y'){
        printf("현재 나이는 %d 살입니다.", year-born);
    }
    if(check == 'N'){
        printf("현재 나이는 %d 살입니다.", year-born-1);
    }

    return 0;
}