#include <stdio.h>

// 문자열을 입력받고 문자열을 뒤집어서 출력하는 함수

void reverse_string(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    for(int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main()
{
    char str[100];
    printf("문자열 입력: ");
    scanf("%s", str);

    reverse_string(str);

    printf("뒤집어진 문자열: %s\n", str);
    return 0;
}