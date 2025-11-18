// 계수 정렬

#include <stdio.h>
#include <stdlib.h>

// 모든 원소의 값이 0보다 크거나 같다고 가정
int arr[15]={7, 5, 9, 0, 3, 1, 6, 2, 9, 1, 4, 8, 0, 5, 2};

int count[10] = {0};

void countingsort(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < count[i]; j++)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main()
{
    int n = sizeof(arr) / sizeof(arr[0]); // sizeof 연산자를 사용해 배열 크기 구하기
    countingsort(arr, n);
    return 0; 
}

