#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[101];
    int score;
} student;

// 퀵 정렬
void quick(student *arr, int left, int right)
{
    // 원소가 1개인 경우 종료
    if (left >= right)
        return;
    // 비벗은 첫번째 원소로 설정
    int pivot = left;
    int low = left + 1;
    int high = right;
    // 비벗보다 큰 원소를 찾을때 까지 반복
    while (low <= high)
    {
        while (low <= right && arr[low].score >= arr[pivot].score)
        {
            low++;
        }
        while (high > left && arr[high].score <= arr[pivot].score)
        {
            high--;
        }
        // 비벗보다 작은 원소를 찾을때 까지 반복
        if (low > high)
        {
            student temp = arr[high];
            arr[high] = arr[pivot];
            arr[pivot] = temp;
        }
        else
        {
            student temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
        }
    }

    // 성적이 낮은 순으로 정렬
    quick(arr, left, high - 1);
    quick(arr, high + 1, right);
}

// no malloc version
int main()
{
    int n;
    scanf("%d", &n);
    student arr[500] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", arr[i].name, &arr[i].score);
    }
    quick(arr, 0, n - 1);
    for (int i = n-1; i >=0; i--)
    {
        printf("%s ", arr[i].name);
    }
    printf("\n");
    return 0;
}
