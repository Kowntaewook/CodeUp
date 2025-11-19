#include <stdio.h>
int main()
{
    int money;
    scanf("%d", &money);
    
    int result10 = ((money % 500) % 100) / 10;
    //result500 == 2
    //result100 == 2
    //result10 == 6
    printf("%d", result10);
    return 0;
}