#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10
char result[10][3];  // 혈액형 결과를 저장할 문자열 배열
int idx = 0;

const char* getBloodType(char a, char b)
{
    if (a == 'A' && b == 'A')
        return "A";
    if (a == 'A' && b == 'B')
        return "AB";
    if (a == 'A' && b == 'O')
        return "A";
    if (a == 'B' && b == 'A')
        return "AB";
    if (a == 'B' && b == 'B')
        return "B";
    if (a == 'B' && b == 'O')
        return "B";
    if (a == 'O' && b == 'A')
        return "A";
    if (a == 'O' && b == 'B')
        return "B";
    if (a == 'O' && b == 'O')
        return "O";
    return "";
}

void addresult(const char* bloodType)
{
    for (int i = 0; i < idx; i++)
    {
        if (strcmp(result[i], bloodType) == 0) // 중복 방지
            return;
    }
    strcpy(result[idx++], bloodType);
}

void sortresult()
{
    for (int i = 0; i < idx - 1; i++)
    {
        for (int j = i + 1; j < idx; j++)
        {
            if (strcmp(result[i], result[j]) > 0)
            {
                char temp[3];
                strcpy(temp, result[i]);
                strcpy(result[i], result[j]);
                strcpy(result[j], temp);
            }
        }
    }
}

int main()
{
    char parent1[3], parent2[3];
    scanf("%s %s", parent1, parent2);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            const char* bloodType = getBloodType(parent1[i], parent2[j]);
            if (strlen(bloodType) > 0) // 유효한 결과만
            {
                addresult(bloodType);
                sortresult();
            }
        }
    }

    for (int i = 0; i < idx; i++)
    {
        printf("%s ", result[i]);
    }
    printf("\n");

    return 0;
}
