#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);  //정수 입력 받기 

    if(num > 0){     // 양수인지 판단 
        printf("양수");
    }
    else if(num < 0){  //음수 인지 판단 else if로 해야지 조건 하나만 충족시 멈춤
        printf("음수");
    }
    else{               // 0인지 판단
        printf("0");
    }
    return 0;
}