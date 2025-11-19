#include <stdio.h>
void Swap(int * ptr1, int * ptr2) // 함수 기능: 두 정수의 값을 교한
{
    int temp; 
    temp = *ptr1; 
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int num1 = 10; // num1의 주소를 ptr1에 저장
    int num2 = 20; // num2의 주소를 ptr2에 저장
    printf("num1 num2: %d %d \n", num1, num2); // num1과 num2의 값을 출력
    Swap(&num1, &num2);  // num1과 num2의 주소를 Swap 함수에 전달
    printf("num1 num2: %d %d \n", num1, num2); // num1과 num2의 값을 출력
    return 0;
}
