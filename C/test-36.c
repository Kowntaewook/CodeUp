#include <stdio.h>
void ShowArayElem(int * param, int len)  // 함수 기능: 배열의 요소를 출력
{
    int i;
    for(i = 0; i < len; i++)
    {
        printf("%d ", param[i]);
    }
    printf("\n");
}

void AddArayElem(int * param, int len, int add) // 함수 기능: 베열의 요소에 add를 더함
{
    int i;
    for(i = 0; i < len; i++)
    {
        param[i] += add;
    }
}

int main(void)
{
    int arr[3]={1, 2, 3};
    AddArayElem(arr, sizeof(arr) / sizeof(int) , 1); // 배열의 요소에 1을 더함
    ShowArayElem(arr, sizeof(arr) / sizeof(int));  // 배열의 요소를 출력

    AddArayElem(arr, sizeof(arr) / sizeof(int), 2); // 배열의 요소에 2를 더함
    ShowArayElem(arr, sizeof(arr) / sizeof(int));  // 배열의 요소를 출력

    AddArayElem(arr, sizeof(arr) / sizeof(int), 3); // 배열의 요소에 3을 더함
    ShowArayElem(arr, sizeof(arr) / sizeof(int));   // 배열의 요소를 출력
    return 0;
}