#include <stdio.h>
int main(){
    int num;

    scanf("%d", &num);

    int result=(num/10)+(num%10);
    printf("%d", result);
    return 0;
}