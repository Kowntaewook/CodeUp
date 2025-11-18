#include <stdio.h>
#include <stdlib.h>

#define MAX 200000   

typedef struct {
    int time;
    int index;
} Food;

int cmp_time(const void *a, const void *b)
{
    Food fa = *(Food*)a;
    Food fb = *(Food*)b;
    if (fa.time == fb.time)
        return fa.index - fb.index;
    return fa.time - fb.time;
}

int cmp_index(const void *a, const void *b)
{
    Food fa = *(Food*)a;
    Food fb = *(Food*)b;
    return fa.index - fb.index;
}

int solution(int *food_times, int food_times_len, long long k)
{
    long long total = 0;
    int i, j;
    for (i = 0; i < food_times_len; i++)
        total += food_times[i];

    if (total <= k)
        return -1;

    Food foods[MAX];
    for (i = 0; i < food_times_len; i++)
    {
        foods[i].time = food_times[i];
        foods[i].index = i + 1;
    }

    qsort(foods, food_times_len, sizeof(Food), cmp_time);

    long long prev_time = 0;
    int n = food_times_len;

    for (i = 0; i < food_times_len; i++)
    {
        long long diff = (long long)foods[i].time - prev_time;
        if (diff != 0)
        {
            long long spend = diff * n;
            if (k < spend)
            {
                k %= n;
                Food remain[MAX];
                int idx = 0;
                for (j = i; j < food_times_len; j++)
                {
                    remain[idx].time = foods[j].time;
                    remain[idx].index = foods[j].index;
                    idx++;
                }

                qsort(remain, idx, sizeof(Food), cmp_index);
                return remain[k].index;
            }
            k -= spend;
            prev_time = foods[i].time;
        }
        n--;
    }

    return -1;
}

int main()
{
    int food_times_len;
    long long k;
    int food_times[MAX];
    int i;

    scanf("%d", &food_times_len);
    for (i = 0; i < food_times_len; i++)
        scanf("%d", &food_times[i]);
    scanf("%lld", &k);

    printf("%d\n", solution(food_times, food_times_len, k));
    return 0;
}
