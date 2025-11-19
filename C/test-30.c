#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

typedef struct point Point; // point 자료형을 Point로 정의

typedef struct person
{
    char name[20];
    char phoneNum[20];
    int age;
} Person;    //person 자료형을 Person으로 정의

int main()
{
    Point pos={10, 20};
    Person man={"이승기", "010-1212-0001", 21};
    printf("%d %d \n", pos.xpos, pos.ypos);
    printf("%s %s %d \n", man.name, man.phoneNum, man.age);

    return 0;
}