#include <stdio.h>
#include <string.h>

int main()
{
    char s[21];
    scanf("%s", s);

    int result = s[0] - '0';

    for (int i = 1; i < strlen(s); i++)
    {
        int num = s[i] - '0';

        if (result <= 1 || num <= 1)
            result += num;
        else
            result *= num;
    }

    printf("%d\n", result);

    return 0;
}
