#include <stdio.h>
int main(){
    int month=0;

    printf("몇달인가요?");
    scanf("%d", &month);

    if(month == 12 || month == 1 || month == 2){
        printf("겨울");
    }
    else if(month == 3 || month == 4 || month == 5){
        printf("봄");
    }
    else if(month == 6 || month == 7 || month == 8){
        printf("여름");
    }
    else{
        printf("가을");
    }

    return 0;
}