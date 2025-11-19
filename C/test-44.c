#include <stdio.h>
#include <string.h>

// 각 각 앞과 뒤를 지정해서 비교?
// int * ptr = &i; 
// int * ptr = &j; ??

//for(i = 0, j = len - 1; i < j; i++, j--)
//{
   // if(str[i] != str[j])
  //  {
        //flag = 0;
        //break;
//    }
//}
//if(flag == 1)
//{
    //printf("회문입니다.");
//}
//else
//{
//    printf("회문이 아닙니다.");
//}

int main()
{
    char str[100];
    printf("문자열 입력: "); 
    scanf("%s", str);

    char * start = &str;
    char * end = &str + strlen(str)-1;

    while(start < end)
    {
        if(start == end)
        {
            printf("회문입니다.");
            break;
        }
        else
        {
            printf("회문이 아닙니다.");
            break;
        }
    }
    return 0;
}