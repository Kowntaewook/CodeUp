/*입력 조건: 첫번째 줄에 N , K 가 공백으로 구분되어 입력된다 (1 <= N <= 100,000,0 <= K <= N)
두번째 줄에 배열 A의 원소들이 공백으로 구분되어 입력된다. 모든 원소는 10,000,000 보다 작은 자연수이다.
세번째 줄에 배열 B의 원소들이 공백으로 구분되어 입력된다. 모든 원소는 10,000,000보다 작은 자연수입니다.
출력 조건 : 최대 K번의 바꿔치기 연산을 수행하여 만들 수 있는 베열 A의 모든 원소의 합의 최댓갑을 출력
입력 예시: 5 3
         1 2 5 4 3
         5 5 6 6 5
출력 예시 : 26*/

#include <stdio.h>
#include <stdlib.h>

//계수 정렬로 구하기
void countingsort(int *arr, int n, int k)
{
    int count[10000001] = {0};
    int i, j;
    for(i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for(i = 0; i < n && k > 0; i++)
    {
        for(j = 0; j < count[arr[i]] && k > 0; j++)
        {
            if(arr[i] < arr[n - 1 - j])
            {
                int temp = arr[i];
                arr[i] = arr[n - 1 - j];
                arr[n - 1 - j] = temp;
                k--;
            }
        }
    }
    int sum = 0;
    for(i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("%d\n", sum);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    return 0;
} 