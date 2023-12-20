#include <iostream>
#include <cstring>
#include <algorithm>
#include <stdio.h>

using namespace std;

const int N = 100;

bool st[N];
int w[N];
int n, sum, len;

bool dfs(int u, int cur, int start)
{
    if (u * len == sum)
        return true;
    if (cur == len)
        return dfs(u + 1, 0, 0);

    for (int i = start; i < n; i++)
    {
        if (st[i])
            continue;
        if (cur + w[i] > len)
            continue;
        st[i] = true;
        if (dfs(u, cur + w[i], i + 1))
            return true;
        st[i] = false;

        if (cur == 0)
            return false;
        if (cur + w[i] == len)
            return false;

        int j = i;
        while (j < n && w[j] == w[i])
            j++;
        i = j - 1;
    }
    return false;
}

int main()
{
    while (cin >> n, n)
    {
        memset(st, 0, sizeof st);
        sum = 0, len = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
            sum += w[i];
            len = max(len, w[i]);
        }
        sort(w, w + n);
        reverse(w, w + n);

        while (true)
        {
            memset(st, 0, sizeof st);
            if (sum % len == 0 && dfs(0, 0, 0))
            {
                printf("%d\n", len);
                break;
            }
            len++;
        }
    }
    return 0;
}