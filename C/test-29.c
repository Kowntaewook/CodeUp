#include <stdio.h>

typedef int INT;  // int를 INT로 정의
typedef int * PTR_INT;  // int *를 PTR_INT로 정의

typedef unsigned int UINT;   // unsigned int를 UINT로 정의
typedef unsigned int * PTR_UINT;  // unsigned int * 를 PTR_UINT로 정의

typedef unsigned char UCHAR;  // unsigned char를 UCHAR로 정의
typedef unsigned char * PTR_UCHAR; // unsigned char *를 PTR_UCHAR로 정의

int main()
{
    INT num1 = 120;
    PTR_INT pnum1 = &num1;

    UINT num2 = 100;
    PTR_UINT pnum2 = &num2;

    UCHAR ch = 'z';
    PTR_UCHAR pch = &ch;

    printf("%d %u %c \n", *pnum1, *pnum2, *pch);

    return 0;
}