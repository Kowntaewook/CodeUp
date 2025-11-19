#include <stdio.h>
int main(){

    int a=0,b=0,c=0;
    int max=0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a>b && a>c){
        max=a;
        printf("%d", max);
    }
    else if(b>a && b>c){
        max=b;
        printf("%d", max);
    }
    else{
        max=c;
        printf("%d", max);
    }


    return 0;
}