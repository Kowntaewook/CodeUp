
#include <stdio.h>
#include <string.h> // 문자열 함수

int main()
{

    /*입력 설명
    하나의 문장과 문자를 오른쪽으로 회전시킨 문자 k가 입력된다. 
    출력 설명
    abba 2
    입력 예시 Copy
    abba 2
    출력 예시 Copy
    cddc*/

    char str[100]; // 문자 배열 선언
    int k; // 반복 할 숫자
    scanf("%s %d", str, &k); 
    for (int i = 0; i < strlen(str); i++) // 문자열의 길이만큼 반복
    {
        printf("%c", str[i] + k); // 아스키 코드 값이 k만큼 높은 문자 출력
    }
    return 0;
}
