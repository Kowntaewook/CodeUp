#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    printf("합계:%d\n", a+b+c);
    printf("출력:%.2f", ((float)(a)+(float)(b)+(float)(c))/3);

    return 0;
}