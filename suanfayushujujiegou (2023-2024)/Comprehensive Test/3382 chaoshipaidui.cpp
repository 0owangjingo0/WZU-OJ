#include <queue>
#include <stdio.h>

int main(void)
{
    //freopen("in.txt", "r", stdin);
    std::queue<int> q;
    int k;
    while (scanf("%d", &k), k != 0)
    {
        if (k == 1)
        {
            int x;
            scanf("%d", &x);
            q.push(x);
        }
        else if (k == 2)
        {
            if (!q.empty())
            {
                q.pop();
            }
        }
        else if (k == 3)
        {
            if (!q.empty())
            {
                printf("%d\n", q.front());
            }
            else
            {
                printf("-1\n");
            }
        }
    }

    return 0;
}