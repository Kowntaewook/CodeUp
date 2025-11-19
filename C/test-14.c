#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);


    //짝수면 출력
    if(a%2 == 0){
        printf("%d\n", a);
    }
    if(b%2 == 0){
        printf("%d\n", b);
    }
    if(c%2 == 0){
        printf("%d", c);
    }

    return 0;
}