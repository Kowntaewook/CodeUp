#include <stdio.h>
#define MAX 10000000

// A[i]: i의 약수 관련 정보를 저장하는 배열 
int A[MAX + 1] = {0};

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    // 약수 배수 정보를 미리 계산
    // i가 2부터 m까지 반복
    for (int i = 2; i <= m; i++) {
        // j는 i의 배수 (i*2, i*3, ..., m)
        for (int j = i * 2; j <= m; j += i) {
            A[j]++; // j에 대해 i가 약수임을 표시
        }
        A[i] += 2; // 자기 자신과 1을 포함하여 약수 개수 보정
    }

    // 각 흑돼지가 고른 수 a에 대해 답 출력
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        if (a == 1)
            // a가 1이면 m 출력 
            printf("%d\n", m);
        else
            // a가 1이 아니면, a의 약수 개수 + m을 a로 나눈 몫 - 1 출력
            printf("%d\n", A[a] + m / a - 1);
    }
    return 0;
}