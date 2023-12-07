#include <stdio.h>
#include <string.h>

int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
long long dp[25][25];
int vis[25][25];

int main() {
    int n, m, x, y;
    scanf("%d %d %d %d", &n, &m, &x, &y);
    memset(dp, 0, sizeof(dp));
    memset(vis, 0, sizeof(vis));

    dp[0][0] = 1;
    vis[x][y] = 1;
    for (int i = 0; i < 8; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx <= n && ny >= 0 && ny <= m) {
            vis[nx][ny] = 1;
        }
    }

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (!vis[i][j]) {
                if (i > 0) dp[i][j] += dp[i - 1][j];
                if (j > 0) dp[i][j] += dp[i][j - 1];
            }
        }
    }

    printf("%lld\n", dp[n][m]);
    return 0;
}