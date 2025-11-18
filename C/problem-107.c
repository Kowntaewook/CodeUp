#include <stdio.h>

#define MAX 1000000

int arr[MAX];

// 자른 떡의 총합을 구하는 함수
long long get_cut_sum(int* arr, int n, int height) {
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > height)
            sum += arr[i] - height;
    }
    return sum;
}

int main() {
    int n;
    long long m;
    scanf("%d %lld", &n, &m);

    int max = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max) max = arr[i]; // 가장 높은 떡을 기록
    }

    int start = 0, end = max;
    int result = 0;

    while(start <= end) {
        int mid = (start + end) / 2;
        long long total = get_cut_sum(arr, n, mid);

        if(total >= m) {
            result = mid;      
            start = mid + 1;
        } else {
            end = mid - 1;     
        }
    }

    printf("%d\n", result);
    return 0;
}
