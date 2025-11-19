#include <stdio.h>
int main(){
    int num =0;

    switch (num)
    {
    case 5:
        printf("인생 영화네요\n");
        break;
    case 4:
        printf("명작입니다\n");
        break;
    case 3:
        printf("킬링타임으로 괜찮아요\n");
        break;
    case 2:
        printf("별로에요\n");
        break;
    case 1:
        printf("추천 하고 싶지 않네요\n");
        break;
    case 0:
        printf("1점도 아깝네요\n");

    default:
        printf("나중에 평점을 다시 남겨 주세요\n");
        break;
    }
}