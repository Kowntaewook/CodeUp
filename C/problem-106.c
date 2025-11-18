#include <stdio.h>

// 선택 정렬 함수
void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // swap
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

// 반복문 이진 탐색
int binarysearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 선택 정렬로 정렬
    selection_sort(arr, n);

    int m;
    scanf("%d", &m);

    int x;
    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        if (binarysearch(arr, n, x) != -1) {
            printf("yes ");
        } else {
            printf("no ");
        }
    }

    printf("\n");
    return 0;
}
