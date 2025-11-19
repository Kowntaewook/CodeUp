#include <stdio.h>
int main()
{
    int num=0;
    int elder = 0;
    int grown = 0;
    int teen = 0;
    int kid = 0;

    while(1)
    {
        scanf("%d\n", &num);

        if(num >= 65)
        {
            elder ++;
        }
        else if(num >= 20 && num <= 64)
        {
            grown ++;
        }
        else if(num >= 8 && num <= 19)
        {
            teen ++;
        }
        else if(num >= 1 && num <= 7)
        {
            kid ++;
        }
        else if(num <= 0)
        {
            break;
        }
        num += 1;
    }

    printf("..조사 종료..\n<귀 댁의 가족 구성>\n총 %d명 노인 %d명, 성인 %d명, 청소년 %d명, 아동 %d명", num,elder, grown, teen, kid);

    return 0;
}