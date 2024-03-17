#include <queue>
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    std::queue<int> q;
    while (n--)
    {
        int x;
        scanf("%d", &x);
        q.push(x);
    }

    int flag = 1;
    while (!q.empty())
    {
        if (flag)
        {
            printf("%d", q.front());
            q.pop();
            flag = 0;
        }
        else
        {
            q.push(q.front());
            q.pop();
            flag = 1;
        }
    }
    putchar('\n');

    return 0;
}