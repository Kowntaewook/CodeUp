// 배열에서 최댓값을 찾는 함수 작성

// 배열에서 최댓값을 찾는 함수

#include <stdio.h>

int find_max(int arr[], int size)
{
    int max = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {0};
    int size;
    scanf("배열 사이즈 입력: %d", &size);

    for(int i = 0; i < size; i++)
    {
        scanf("%d ", &arr[i]);
    }

    int max_value = find_max(arr, size);

    printf("%d", max_value);
    return 0;
}