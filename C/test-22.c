#include <stdio.h>
int main()
{
    int num1;
    int sum=0;
    scanf("%d", &num1);

    for(int i = 0; i <= num1; i++)
    {
        sum+=i;
    }
    printf("%d", sum);
    return 0;
}