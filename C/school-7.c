#include <stdio.h>
int main(){
    int a=9000,  b =2250,  c=7200;
    int num1,num2,num3;

    scanf("%d\n %d\n %d\n", &num1, &num2, &num3);

    int result=(a*num1)+(b*num2)+(c*num3);

    printf("%d", result);



    return 0;
}