/*문제
지하철 이용 도중 특정한 역에서 하차 처리를 한 후, 
$1$시간 이내에 하차한 역과 같은 역에서 승차하면 승차 요금이 
$0$원이 됩니다. 이를 재승차 환승 할인이라고 합니다. 재승차 환승 할인이 적용되지 않은 경우, 승차한 역에서 
$1550$원이 부과됩니다.

가희는 지하철을 이용하다가 급한 일이 생겨 
$A$역에서 하차 처리를 하였습니다. 
$A$역에서 내리고 
$15$분이 지난 후, 가희는 
$B$역에서 승차하였습니다. 가희가 
$B$역에서 승차했을 때, 부과된 승차 요금은 얼마인지 구해주세요.

입력
첫 번째 줄에 
$A$역의 이름이 주어집니다.

두 번째 줄에 
$B$역의 이름이 주어집니다.

출력
첫 번째 줄에 부과된 승차 요금을 출력해 주세요. 만약 부과된 승차 요금을 알 수 없다면, 대신 ?를 출력해 주세요.

제한
모든 역명의 이름은 영어 대소문자와 숫자로만 구성되어 있으며, 길이는 
$1$ 이상 
$20$ 이하입니다.
동일한 이름을 가진 다른 역은 없으며, 각 역의 이름은 고유합니다.
가희가 
$A$역에서 하차 처리를 한 이후에, 
$B$역에서 승차 처리를 하기 전까지 어떠한 역에서도 승하차 처리를 하지 않았습니다.
예제 입력 1 
natto
daisuki
예제 출력 1 
1550
예제 입력 2 
pekopekomuto
pekopekomuto
예제 출력 2 
0
예제 입력 3 
saTo
tanaKA
예제 출력 3 
1550
예제 입력 4 
seasonOfMemoriEs
beyourwings
예제 출력 4 
1550
예제 입력 5 
ara
osu
예제 출력 5 
1550
그래도 Busan Int'l Finance Center·Busan Bank 보다는 짧잖아요?

예제 입력 6 
Iwon
Cheonwon
예제 출력 6 
1550
예제 입력 7 
candyCandy
candyCandy
예제 출력 7 
0
출처 */

// https://www.acmicpc.net/problem/34665

#include <stdio.h>
#include <string.h>

int main()
{
    char A[21];
    char B[21];

    scanf("%s", A);
    scanf("%s", B);

    if(strcmp(A, B) == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("1550\n");
    }

    return 0;
}