#include <stack>
#include <stdio.h>

int main(void)
{
    //freopen("in.txt", "r", stdin);
    std::stack<int> s;
    
    int x;
    while (scanf("%d", &x), x != 0)
    {
        if (x == 1)
        {
            int n;
            scanf("%d", &n);
            s.push(n);
            printf("%d\n", n);
        }
        else if (x == 2)
        {
            if (!s.empty())
            {
                printf("%d\n", s.top());
                s.pop();
            }
            else
            {
                printf("-1\n");
            }
        }
    }
}