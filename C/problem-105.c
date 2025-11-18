/* 예시 입력 10 7
           1 3 5 7 9 11 13 15 17 19
           4
    예시 출력 10 7
            1 3 5 7 9 11 13 15 17 19
            원소가 존재하지 않습니다.*/

/*#include <stdio.h>
#include <stdlib.h>

// 이진 탐색 재귀 함수
int binarysearch(int arr[], int left, int right, int target)
{
    if (left > right) 
        return -1;
    int mid = (left + right) / 2;
    if (arr[mid] == target) 
        return mid;
    else if (arr[mid] < target) 
        return binarysearch(arr, mid + 1, right, target);
    else 
        return binarysearch(arr, left, mid - 1, target);
}

int main()
{
    int n, target;

    scanf("%d %d", &n, &target);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = binarysearch(arr, 0, n - 1, target);

    if(result == -1)
    {
        printf("원소가 존재하지 않습니다.\n");
    }
    else
    {
        printf("%d\n", result);
    }
}*/

//반복문으로 구현한 이진 탐색

#include <stdio.h>
#include <stdlib.h>

int binarysearch(int arr[], int left, int right, int target)
{
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n, target;
    scanf("%d %d", &n, &target);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = binarysearch(arr, 0, n - 1, target);

    if(result == -1)
    {
        printf("원소가 존재하지 않습니다.\n");
    }
    else
    {
        printf("%d\n", result);
    }
    return 0;
}