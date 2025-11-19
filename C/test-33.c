#include <stdio.h>
#include <string.h>

struct B
{
    char name[10];
    char born[10];
    char live[10];
    char born2[10];
};

int main()
{
    int i;
    struct B arr[3];

    // 입력
    for(i = 0; i < 3; i++) 
    {
        scanf("%s", arr[i].name);
        scanf("%s", arr[i].born);
        scanf("%s", arr[i].live);
    }

    for(i = 0; i < 1; i++)
    {
        scanf("%s", arr[i].born2);
    }

    for(i = 0; i < 3; i++)
    {
        if(!strcmp(arr[i].born, arr[i].born2))
        {
            printf("%s %s %s\n", arr[i].name, arr[i].born, arr[i].live);
        }
    }

    return 0;
}