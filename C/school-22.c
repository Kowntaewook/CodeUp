#include <stdio.h>
int main(){
    char ch=0;

    scanf("%c", &ch);

    if(ch >= 65 && ch <= 122){
        printf("알파벳");
    }
    else if(ch >= 48 && ch <= 57){
        printf("숫자");
    }
    else{
        printf("특수 문자");
    }
    
    return 0;
}