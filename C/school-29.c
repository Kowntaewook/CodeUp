#include <stdio.h>
int main(){
    int num=0;
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("신입생");
        break;
    
    case 2:
        printf("재학생");
        break;

    case 3:
        printf("졸업생");
        break;
    
    default:
        break;
    }
    
    return 0;
}