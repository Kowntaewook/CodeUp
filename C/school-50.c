#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count = 0;

    printf("문자열을 입력하세요: ");
    scanf("%s", str);  // 공백 포함 입력을 원하면 fgets 사용

    // 문자열 길이를 미리 구해두기
    int len = strlen(str);

    // 'a'의 개수 세기
    for(int i = 0; i < len; i++)
    {
        if(str[i] == 'a')
        {
            count++;
        }
    }

    printf("a의 개수: %d개\n", count);
    return 0;
}
