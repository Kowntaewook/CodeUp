#include <stdio.h>

void strncpy(char str1[], char str2[], int n)
{
    int i = 0;
    while(i < n && str1[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
    }
    while(i < n)
    {
        str1[i++] = '\0';
    }
}

int main()
{
    int n;
    char str1[100];
    char str2[100];
    scanf("%s %s %d");
    return 0;
}