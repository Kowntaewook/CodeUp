#include <stdio.h>
int main(){
    float num1, num2;
    scanf("%f %f", &num1, &num2);
    //A의 키는 170.0Cm 이고, 몸무게는 80.0kg이라고 하자.

    //A의 표준 몸무게 = (170 - 100) * 0.9 = 63 kg

    //A의 비만도 = (80 - 63) * 100 / 63     = 26.98

    //따라서 비만도가 26.98이므로 A는 "비만"

    if(num1 < 100){    
        printf("잘못된 입력입니다.");
    }
    int standard_weight = (num1 - 100) * 0.9;
    float obe = (num2 - standard_weight) * 100 / standard_weight;

    if(obe <= 10){   //위 공식을 활용해서 계산
        printf("정상");
    }
    else if(obe <10 && obe <= 20){
        printf("과체중");
    }
    else{
        printf("비만");
    }
    return 0;
}