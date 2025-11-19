#include <stdio.h>

#define NUM_COUNT 10

int main() {
  int scores[NUM_COUNT];
  int sum = 0;
  int min_score = 100; 

  printf("10개의 점수를 입력하세요:\n");

  // 점수 입력 및 총합 계산
  for (int i = 0; i < NUM_COUNT; i++) {
    printf("%d번째 점수: ", i + 1);
    scanf("%d", &scores[i]);
    sum += scores[i];

    if (scores[i] < min_score) {
      min_score = scores[i];
    }
  }

  printf("총합: %d\n", sum);
  printf("최하점: %d\n", min_score);

  return 0;
}