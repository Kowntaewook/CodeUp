#include <stdio.h>
int main(){
    long num1, num2;
    scanf("%ld, %ld", &num1, &num2);

    //1 ~ 40 시간 : 시급 
    //40 시간 초과 시간 : 시급 * 1.5 
    //만약 근로자가 50시간을 근무하고 시급이 만원이면 40시간까지는 만원으로 계산되고, 초과되는 시간은 시급의 1.5배로 계산된다. 40 * 10000 + 10 * 10000 * 1.5 = 550,000원

    if(num1 > 1 && num1 <= 40){
        printf("%ld\n", num1 * num2);
    }
    else if(num1 > 40){
        printf("%ld\n", (num1 - 40) * num2 * 1.5 + 40 * num2);
    }
    else{
        printf("잘못된 입력입니다.");
    }
    return 0;
}