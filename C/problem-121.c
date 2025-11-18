#include <stdio.h>

int main() {
    long long n;           // 보말 개수
    long long a, b, c;     // a: 보말→한치, b: 한치→전복, c: 전복→다금바리

    if (scanf("%lld", &n) != 1) 
        return 1;
    if (scanf("%lld %lld %lld", &a, &b, &c) != 3) 
        return 1;

    // 0 또는 음수 입력 방지
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("0\n");
        return 0;
    }

    long long result = 0;

    while (1) {
        long long squid = n / a;          // 보말 → 한치
        long long remain_bomal = n % a;

        long long abalone = squid / b;    // 한치 → 전복
        long long remain_squid = squid % b;

        long long fish = abalone / c;     // 전복 → 다금바리
        long long remain_abalone = abalone % c;

        if (fish == 0) 
            break;             // 더 이상 다금바리 못 만들면 종료

        result += fish;

        // 남은 자원을 보말 단위로 환산
        n = remain_bomal + remain_squid * a + remain_abalone * a * b;

        // 무한 루프 방지
        if (n < a * b * c) 
            break;
    }

    for(int i = 0; i < 4; i++)  {
        long long squid = n / a;
        long long remain_bomal = n % a;
        long long abalone = squid / b;
        long long remain_squid = squid % b;
        long long fish = abalone / c;
        if (fish == 0)
            break;
        result += fish;
        n = remain_bomal + remain_squid * a + (abalone % c) * a * b;
    }

    printf("%lld\n", result);
    return 0;
}
