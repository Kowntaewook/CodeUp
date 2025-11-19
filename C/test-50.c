#include <stdio.h>

int main()
{
    int a = 10;
    int n,m,k;
    int result = 0;
    scanf("%d %d %d", &n, &m, &k);

    int inputnumber[n];
    int first = -2147483648;
    int second = -2147483648;

    // 정수 입력
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &inputnumber[i]);

        // 가장 큰 수와 두 번째 큰 수를 동시에 찾기
        if (inputnumber[i] > first)
        {
            second = first;
            first = inputnumber[i];
        }
        else if (inputnumber[i] > second && inputnumber[i] < first)
        {
            second = inputnumber[i];
        }
    }

    while(a == 10)
    {
        for(int i = 0; i < k; i++)
        {
            if(m == 0)
            {
                break;
            }
            result += first;
            m -= 1;
        }
        if(m == 0)
        {
            break;
        }
        result += second;
        m -= 1;
    }

    printf("%d", result);

    return 0;
}
