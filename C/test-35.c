#include <stdio.h>
int main()
{
    int arr[3]={11, 22, 33};
    int *ptr=arr;
    printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2)); // 0, 1, 2번째 값 출력 (값을 바꾸는게 아니라 주소를 바꿈)

    printf("%d ", *ptr); ptr++; // 0번째 값 출력 후 ptr을 1 더하기 이동 (주소를 바꾸는게 아니라 값이 바뀜)
    printf("%d ", *ptr); ptr++; // 1번째 값 출력 후 ptr을 1 더하기 이동
    printf("%d ", *ptr); ptr--; // 2번째 값 출력 후 ptr을 1 뺴기 이동 
    printf("%d ", *ptr); ptr--; // 1번째 값 출력 후 ptr을 1 빼기 이동
    printf("%d ", *ptr); printf("\n");
    return 0;
}