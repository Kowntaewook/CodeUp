#include <stdio.h>

int main() {
    int Q;
    scanf("%d", &Q);

    while (Q--) {
        int lv, lang, read, listen;
        scanf("%d %d %d %d", &lv, &lang, &read, &listen);

        if (lv != 1 && lv != 2) {
            printf("NO\n");
            continue;
        }

        if (listen < 50) {
            printf("NO\n");
            continue;
        }

        int total_min = (lv == 1 ? 100 : 90);

        int cnt31 = 0, cnt32 = 0;

        if (total_min > 3 * lang) cnt31++;
        if (lang <= 22) cnt32++;

        if (total_min > 3 * read) cnt31++;
        if (read <= 22) cnt32++;

        if (cnt31 >= 2 || cnt32 >= 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
