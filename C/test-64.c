#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 1 부터 15까지 10의 배열에 난수로 뽑는데 중복 없이 하기

int main()  {
    int arr[10];
    int i, j, num;
    int is_dupli;

    srand(time(NULL)); // 시드 : 현재 시간 기반 난수 생성 

    for(i = 0; i < 10;) {
        num = (rand() % 15) + 1;

        is_dupli = 0;
        for(j = 0; j < i; j++)
        {
            if(arr[j] == num)   {
                is_dupli = 1;
                break;
            }
        }
        if(!is_dupli)   {
            arr[i] = num;
            i++;
        }
    }

    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    //1. 버블정렬 2. 선택정렬 3. 삽입정렬
    return 0;
}