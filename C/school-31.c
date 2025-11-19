#include <stdio.h>
int main(){
    int time = 0;
    printf("지금은 몇 시인가요?(0~23):");
    scanf("%d", &time);
    if(time == 0){
        printf("오전 ");
        time +=12;
    }
    else if(time-12 > 0){
        printf("오후 ");
        time -= 12;
    }
    else if(time - 12 == 0){
        printf("오후 ");
    }
    else{
        printf("오전 ");
    }
    printf("%d시 입니다.", time);

    return 0;
}