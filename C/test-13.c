#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    // 시 분 초 출력
    printf("시간 : %d\n분 : %d\n초 : %d", num/3600, (num%3600)/60, num%60);

    return 0;
}