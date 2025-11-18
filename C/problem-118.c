#include <stdio.h>
#include <stdlib.h>

#define MAX 41// 0 ~ 40

int minpress(int a, int b)
{
    int visited[MAX]; 
    for (int i = 0; i < MAX; i++) 
        visited[i] = -1;

    int queue[100], front = 0, rear = 0;

    queue[rear++] = a;
    visited[a] = 0;

    int moves[6] = {1, -1, 5, -5, 10, -10};

    while (front < rear) {
        int cur = queue[front++];

        if (cur == b) 
            return visited[cur];

        for (int i = 0; i < 6; i++) {
            int next = cur + moves[i];
            if (0 <= next && next <= 40 && visited[next] == -1) {
                visited[next] = visited[cur] + 1;
                queue[rear++] = next;
            }
        }
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", minpress(a, b));
    return 0;
}
