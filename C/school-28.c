#include <stdio.h>
int main(){
    int num1=0,num2=0;
    int num3=0;

    scanf("%d %d", &num1,&num2);
    scanf("%d", &num3);

    switch (num3)
    {
    case 1:
        printf("%d", num1+num2);
        break;

    case 2:
        printf("%d", num1-num2);
        break;
    
    case 3:
        printf("%d", num1*num2);
        break;
    
    case 4:
        printf("%d", num1/num2);
        break;

    default:
        break;
    }
    
    return 0;
}