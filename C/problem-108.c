#include <stdio.h>
#include <stdlib.h>


int calculatetotal(int arr[], int n, int cap) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > cap) {
            total += cap; // 상한액을 초과하면 상한액만 더함
        } else {
            total += arr[i]; // 상한액 이하인 경우 요청 금액 그대로 더함
        }
    }
    return total;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int m;
    scanf("%d", &m);

    // 이진 탐색을 위한 초기값 설정
    int start = 0, end = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > end) {
            end = arr[i]; // 요청 금액 중 최대값을 찾음
        }
    }

    int result = 0;
    while (start <= end) {
        int mid = (start + end) / 2;
        int total = calculatetotal(arr, n, mid);

        if (total <= m) {
            result = mid; // 가능한 상한액 저장
            start = mid + 1; // 더 큰 상한액을 탐색
        } else {
            end = mid - 1; // 더 작은 상한액을 탐색
        }
    }

    printf("%d\n", result);
    return 0;
}