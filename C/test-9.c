#include <stdio.h>

int main() {
  int S=0,T=0;
  int N=0,X=0;

  scanf("%d %d", &N, &X);

  for(int i = 1; i <= N; i++)
  {
    scanf("%d %d", &S, &T);
    int c = S<T?T:S;
    int d = S<T?S:T;
    int e = c-d;
    if(e > T)
    {
        printf("-1");
    }
    else
    {
        printf("%d", T);
    }
  }
  return 0;
}