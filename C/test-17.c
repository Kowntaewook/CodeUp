#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);

    switch (ch)
    {
    case 65:     //ASCII 코드에서 대문자 A 이므로 case 65로 한다.
        printf("ADENINE");
        break;
    case 67:     //ASCII 코드에서 대문자 C는 67이므로 case 67
        printf("CYTOSINE");
        break;
    case 71:     // ASCII 코드에서 대문자 G는 71이므로 case 71
        printf("GUANINE");
        break;
    case 84:    // ASCII 코드에서 대문자 T는 84이므로 case 84
        printf("THYMINE");
        break;
    default:   //예외 사항 처리
        break;
    }

    return 0;
}