#include <stdio.h>
int main()
{
    int i = 0, x = 0;

    do{
        if (i % 5 == 0) x++;
        i++;
    }while(i < 20);
    printf("x=%d\n", x);
    
    return 0;
}