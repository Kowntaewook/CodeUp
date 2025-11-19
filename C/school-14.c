#include <stdio.h>
int main(){
    int a=0,b=0;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a > b){
        printf("사랑");
    }
    else if(b > a){
        printf("해!");
    }
    else{
        printf("사랑해!");
    }
    return 0;
}