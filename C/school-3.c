#include <stdio.h>
int main(void){
    int a=0,b=0;

    scanf("%d %d", &a, &b);

    int result = a+b;  
    int result2 = a-b;
    int result3 = a*b;
    int result4 = a/b;

    printf("%d %d %d %d", result,result2,result3,result4);

    return 0;
}