#include <stdio.h>
#include <string.h>

int main() {
    int Q;
    if (scanf("%d", &Q) != 1) 
        return 0;

    for (int q = 0; q < Q; q++) {
        long long r, c, k;
        if (scanf("%lld%lld%lld", &r, &c, &k) != 3) 
            return 0;

        
        if (r != 1 && r != 2) {
            printf("-1\n");
            continue;
        }

        
        if (c % 3 != 0) {
            printf("-1\n");
            continue;
        }

        long long m = c / 3;
        if (m == 0) {
            printf("-1\n");
            continue;
        }
        
        int too_big = 0;
        if (m < 60) {
            long long max_k = 1LL << m;  // 2^m
            if (k > max_k) too_big = 1;
        }
        

        if (too_big) {
            printf("-1\n");
            continue;
        }

        
        if (r == 1) {
            printf("-1\n");
            continue;
        }

        
        char s1[1000005] = {0};
        char s2[1000005] = {0};
        int pos = 0;

        long long kk = k - 1;  

        for (long long i = 0; i < m; i++) {
            int bit = (kk >> (m - 1 - i)) & 1;
            if (bit == 0) {
                s1[pos] = '1'; s1[pos+1] = '1'; s1[pos+2] = '4';
                s2[pos] = '1'; s2[pos+1] = '4'; s2[pos+2] = '4';
            } else {
                s1[pos] = '3'; s1[pos+1] = '2'; s1[pos+2] = '2';
                s2[pos] = '3'; s2[pos+1] = '3'; s2[pos+2] = '2';
            }
            pos += 3;
        }
        s1[pos] = '\0';
        s2[pos] = '\0';

        printf("%s\n%s\n", s1, s2);
    }

    return 0;
}