#include <stdio.h>
int main(){
    int num;

    scanf("%d", &num);
    int result1=num/100;
    int result2=(num%100)/10; 
    int result3=((num%100)%10)/1;
    

    printf("%d%d%d", result3,result2,result1);

    return 0;
}