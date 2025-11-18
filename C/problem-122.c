
/*발표 리스트에 추가하려면 1번 삭제하려면 2번 종료하려면 3번을 누르세요 : 1
발표 리스트에 추가할 학생 번호를 입력하세요: 3
<<발표리스트>>
    1번 Minji   2021013     4   class4
    총 발표명 수: 1명
발표 리스트에 추가하려면 1번 삭제하려면 2번 종료하려면 3번을 누르세요 : 1
발표 리스트에 추가할 학생 번호를 입력하세요: 1
<<발표리스트>>
    1번 Minji   2021013     4   class4
    2번 Sunjung   2020033     5   class3
    총 발표명 수: 2명
발표 리스트에 추가하려면 1번 삭제하려면 2번 종료하려면 3번을 누르세요 : 2
발표 리스트에서 삭제할 학생 번호를 입력하세요: 1
<< 발표리스트 >>
    1번: Sunjung 2020033   5   class3
총 발표명 수: 1명
중복된 번호는 추가 X
삭제할 학생 번호가 없으면 삭제할 학생이 없습니다.
8번 까지 학생 번호 있고 그 이상 부턴 잘못된 번호입니다.
원래 리스트에서 가져오기
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 8

typedef struct Student
{
    char name[20];
    int stnum;
    int grade;
    char classnum[20];
}Student;

int getStudentInfo(Student addList[], int stunum, Student* student);

void printList(Student List[], int count)
{
    if (count == 0)
    {
        printf("발표 리스트가 비어있습니다.\n");
        return;
    }

    
    for (int i = 0; i < count; i++)
    {
        printf("%d번 이름: %s, 학번: %d, 학년: %d, 반: %s\n",
               i + 1,
               List[i].name,
               List[i].stnum,
               List[i].grade,
               List[i].classnum);
    }
    printf("\n");
}

int addStudent(Student List[], Student addList[], int count, int stunum) 
{
    Student student;
    if(getStudentInfo(addList, stunum, &student))
    {
        List[count] = student;
        return 1;
    }
    return 0;
}
int deleteStudent(Student List[], int count, int key)
{
    int idx = -1;

    // 사용자가 리스트 번호(1..count)를 입력한 경우
    if (key >= 1 && key <= count) {
        idx = key - 1;
    } else {
        // 아니면 학번(stnum)으로 찾기
        for (int i = 0; i < count; i++) {
            if (List[i].stnum == key) {
                idx = i;
                break;
            }
        }
    }

    if (idx == -1) {
        printf("삭제할 학생이 없습니다.\n");
        return 0;
    }

    // 한 칸씩 앞으로 당기기
    for (int j = idx; j < count - 1; j++) {
        List[j] = List[j + 1];
    }

    // 마지막 슬롯 초기화(선택사항)
    List[count - 1].stnum = 0;
    strcpy(List[count - 1].name, "");
    List[count - 1].grade = 0;
    strcpy(List[count - 1].classnum, "");

    return 1;
}

int checkDuplicate(Student List[], int count, int stunum) 
{
    for(int i = 0; i < count; i++)
    {
        if(List[i].stnum == stunum)
        {
            return 1;
        }
    }
    return 0;
}
int checkValid(int stunum)
{
    if(stunum < 1 || stunum > MAX)
    {
        return 0;
    }
    return 1;
}
void initList(Student List[])
{
    for(int i = 0; i < MAX; i++)
    {
        List[i].stnum = 0;
        strcpy(List[i].name, "");
        List[i].grade = 0;
        strcpy(List[i].classnum, "");
    }
}
void initAddList(Student addList[])
{
    strcpy(addList[0].name, "Sunjung");
    addList[0].stnum = 2020033;
    addList[0].grade = 5;
    strcpy(addList[0].classnum, "class3");
    
    strcpy(addList[1].name, "Minji");
    addList[1].stnum = 2021013;
    addList[1].grade = 4;
    strcpy(addList[1].classnum, "class4");

    strcpy(addList[2].name, "Hana");
    addList[2].stnum = 2019123;
    addList[2].grade = 3;
    strcpy(addList[2].classnum, "class2");

    strcpy(addList[3].name, "Jisoo");
    addList[3].stnum = 2022045;
    addList[3].grade = 2;
    strcpy(addList[3].classnum, "class1");

    strcpy(addList[4].name, "Yuna");
    addList[4].stnum = 2021123;
    addList[4].grade = 4;
    strcpy(addList[4].classnum, "class4");

    strcpy(addList[5].name, "Soojin");
    addList[5].stnum = 2023012;
    addList[5].grade = 1;
    strcpy(addList[5].classnum, "class1");

    strcpy(addList[6].name, "Dahyun");
    addList[6].stnum = 2020056;
    addList[6].grade = 5;
    strcpy(addList[6].classnum, "class3");

    strcpy(addList[7].name, "Chaeyoung");
    addList[7].stnum = 2021109;
    addList[7].grade = 4;
    strcpy(addList[7].classnum, "class4");
}
int getStudentInfo(Student addList[], int stunum, Student* student)
{
    if (stunum < 1 || stunum > MAX) {
        return 0;
    }
    *student = addList[stunum - 1];
    return 1;
}

int main()
{
    Student List[MAX];
    Student addList[MAX];
    int count = 0;
    int choice;
    int stunum;
    initList(List);
    initAddList(addList);

    while(1)
    {
        printf("발표 리스트에 추가하려면 1번 삭제하려면 2번 종료하려면 3번을 누르세요: ");
        scanf("%d", &choice);
        while (getchar() != '\n');

        if(choice == 1)
        {
            printf("<< 발표 리스트 >>\n");
            printList(List, count);   

            printf("발표 리스트에 추가할 학생 번호를 입력하세요: ");
            scanf("%d", &stunum);
            while (getchar() != '\n');

            if(!checkValid(stunum))   
            {
                printf("잘못된 번호입니다.\n");
                continue;
            }

            if(checkDuplicate(List, count, stunum) == 1)
            {
                printf("이미 발표리스트에 있는 학생입니다.\n");
                continue;
            }

            if(addStudent(List, addList, count, stunum))
            {
                count++;
            }

            printList(List, count);
            printf("총 발표명 수: %d명\n", count);
        }
        else if(choice == 2)
        {
            printf("<< 발표 리스트 >>\n");
            printList(List, count);   

            if(count == 0)
            {
                printf("삭제할 학생이 없습니다.\n");
                continue;
            }

            printf("발표 리스트에서 삭제할 학생 번호를 입력하세요: ");
            scanf("%d", &stunum);

            if(deleteStudent(List, count, stunum))
            {
                count--;
            }

            printList(List, count);
            printf("총 발표명 수: %d명\n", count);
        }
        else if(choice == 3)
        {
            break;
        }
        else
        {
            printf("잘못된 입력입니다.\n");
            continue;
        }
    }

    return 0;
}
