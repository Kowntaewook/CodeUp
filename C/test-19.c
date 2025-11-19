#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);

    switch (num)
    {
    case 3:  // 3~5는 봄이므로 묶어서 처리
    case 4:
    case 5:
        printf("spring");
        break;
    case 6:  // 6~8는 여름이므로 묶어서 처리
    case 7:
    case 8:
        printf("summer");
        break;
    case 9:  // 9~11는 가을이므로 묶어서 처리
    case 10:
    case 11:
        printf("fall");
        break;
    case 12:  // 위 이유와 같음
    case 1:
    case 2:
        printf("winter");
        break;
    default:  //예외 사항 처리
        break;
    }
    return 0;
}