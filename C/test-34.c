#include <stdio.h>
int main()
{
    int arr1[3]={1, 2, 3};
    double arr2[3]={1.1, 2.2, 3.3};

    printf("%d %g \n", *arr1, *arr2); // 0번쨰 값 출력
    *arr1 += 100; // 0번째 값에 100을 더함
    *arr2 += 120.5; // 0번째 값에 120.5를 더함
    printf("%d %g \n", arr1[0], arr2[0]); // 각 각의 0번쨰 값 출력
    
    return 0;
}