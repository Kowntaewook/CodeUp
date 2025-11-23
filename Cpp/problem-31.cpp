// Flipkart interview question - Gold Mine Problem

#include <stdio.h>

int R, C;
int gold[20][20];
int dp[20][20];

int getMaxGold(int x, int y)
{
    if(y < 0 || y >= C)
        return 0;
    if(x == R - 1)
        return gold[x][y];
    if(dp[x][y] != -1)
        return dp[x][y];
    int rightUp = getMaxGold(x + 1, y - 1);
    int right = getMaxGold(x + 1, y);
    int rightDown = getMaxGold(x + 1, y + 1);

    int maxGold = rightUp;
    if(right > maxGold)
        maxGold = right;
    if(rightDown > maxGold)
        maxGold = rightDown;
    dp[x][y] = gold[x][y] + maxGold;

    return dp[x][y];
}

int main()
{
    int T;
    scanf("%d", &T);
    
    while(T--)
    {
        scanf("%d %d", &R, &C);
        for(int i = 0; i < R; i++) 
        {
            for(int j = 0; j < C; j++) 
            {
                scanf("%d", &gold[i][j]);
                dp[i][j] = -1;
            }
        }
        
        int maxGold = 0;
        for(int j = 0; j < C; j++)
        {
            int goldCollected = getMaxGold(0, j);
            if(goldCollected > maxGold)
                maxGold = goldCollected;
        }
        
        printf("%d\n", maxGold);
    }
    return 0;
}

