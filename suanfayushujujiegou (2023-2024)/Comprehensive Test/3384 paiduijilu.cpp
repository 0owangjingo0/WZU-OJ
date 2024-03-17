#include <deque>
#include <stdio.h>
#include <vector>
#include <utility>

int main(void)
{
    std::deque<int> q;
    std::vector<std::pair<int, int> > v;
    
    int n;
    scanf("%d", &n);
    n -= 2;

    while (n--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        v.push_back(std::make_pair(a, b));
    }
    int a, b;
    scanf("%d %d", &a, &b);
    q.push_front(a);
    q.push_back(b);
    while (v.size() != 0)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].second == q.front())
            {
                q.push_front(v[i].first);
                v.erase(v.begin() + i);
                break;
            }
            if (v[i].first == q.back())
            {
                q.push_back(v[i].second);
                v.erase(v.begin() + i);
                break;
            }
        }
    }

    for (int i = 0; i < q.size(); i++)
    {
        printf("%d ", q[i]);
    }
    putchar('\n');
}