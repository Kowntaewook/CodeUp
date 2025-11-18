// 문자열 재정렬
/*알파벳 대문자의 숫자(0~9)로만 구성된 문자열이 입력으로 주어진다 이떄 모든 알파벳을 오름차순으로 정렬하여 출력한 뒤에 그 뒤에 모든 숫자를 더한 값을 이어서 출력합니다.

예) K1KA5CB7 -> ABCKK13

입력 조건 : 첫째 줄에 하나의 문자열 S가 주어집니다. 1 <= S <= 10000
출력 조건 : 첫째 줄에 문제에서 요구하는 정답을 출력합니다.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10000];
    int sum = 0;

    char result[10000];
    int index = 0;

    scanf("%s", str);
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            result[index] = str[i];
            index++;
        }
        else
        {
            sum += str[i] - '0';
        }
    }
    
    result[index] = '\0';
    char temp;

    for (int i = 0; i < index - 1; i++)
    {
        for (int j = i + 1; j < index; j++)
        {
            if (result[i] > result[j])
            {
                temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }
    printf("%s%d", result, sum);
    
    return 0;
}