#include <stdio.h>
int main(){
    int a=0,b=0;
    char ch;

    scanf("%d %d", &a,&b);
    scanf("%c", &ch);

    if(ch == '+'){
        printf("%d", a+b);
    }

    else if(ch == '-'){
        printf("%d", a-b);
    }
    else if(ch == 'x'){
        printf("%d", a*b);
    }

    else{
        printf("%d", a/b);
    }

    return 0;
}