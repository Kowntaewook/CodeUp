#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
}Point;  // point 자료형을 Point로 정의

void ShowPosition(Point pos)     // xpos, ypos값을 출력 [xpos, ypos]
{
    printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void)
{
    Point cen;   
    printf("Input current pos: ");
    scanf("%d %d", &cen.xpos, &cen.ypos);
    return cen;
}

int main()
{
    Point curPos=GetCurrentPosition(); // curPos == GetCurrentPosition(void)
    ShowPosition(curPos);  // curPos를 출력  Input current pos:  입력한 좌표를 출력
    return 0;
}