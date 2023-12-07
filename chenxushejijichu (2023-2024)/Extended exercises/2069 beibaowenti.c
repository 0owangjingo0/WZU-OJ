#include <stdio.h>

#define MAXN 105
#define MAXW 1005

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int n, w;
    scanf("%d%d", &n, &w);
    int weight[MAXN], value[MAXN];
    for (int i = 1; i <= n; i++) {
        scanf("%d%d", &weight[i], &value[i]);
    }

    int dp[MAXN][MAXW] = {0};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= w; j++) {
            if (j < weight[i]) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
            }
        }
    }

    printf("%d\n", dp[n][w]);

    return 0;
}