#include <stdio.h>
int main(){
    int a=0,b=0,c=0;

    scanf("%d %d %d", &a,&b,&c);

    if(a>b && a>c){
        if(b+c < a){
            printf("유효");
        }
        else{
            printf("X");
        }
    }

    else if(b>a && b>c){
        if(a+c < b){
            printf("유효");
        }
        else{
            printf("X");
        }
    }

    else{
        if(a+b < c){
            printf("유효");
        }
        else{
            printf("X");
        }
    }

    return 0;
}