#include <stdio.h>
int main(){
    long long int a,b,c;
    scanf("%ld %ld %ld", &a, &b, &c);
    
    printf("%ld\n", a+b+c);
     //평균은 소수점 이하 둘째 자리에서 반올림해서 소수점 이하 첫째 자리까지 출력한다.
     printf("%.1f", (double)(a+b+c)/3);

    return 0;
}