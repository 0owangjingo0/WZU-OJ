#include <stack>
#include <stdio.h>
#include <vector>
#include <map>

int main(void)
{
    std::map <char, int> priority;
    priority['+'] = 1;
    priority['-'] = 1;
    priority['*'] = 2;
    priority['/'] = 2;
    priority['('] = 3;
    priority[')'] = 3;
    std::stack <char> s;
    std::vector <char> ans;
    char ch;

    while (ch = getchar(), ch != '\n')
    {
        if (ch == ' ')
        {
            continue;
        }

        if (ch >= '0' && ch <= '9')
        {
            ans.push_back(ch);
        }
        else
        {
            if (ch == '(')
            {
                s.push(ch);
            }
            else if (ch == ')')
            {
                while (s.top() != '(')
                {
                    ans.push_back(s.top());
                    s.pop();
                }

                s.pop();
            }
            else
            {
                while (!s.empty() && s.top() != '(' && priority[s.top()] >= priority[ch])
                {
                    ans.push_back(s.top());
                    s.pop();
                }

                s.push(ch);
            }
        }
    }

    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }

    int i;
    for (i = 0; i < ans.size() - 1; i++)
    {
        printf("%c ", ans[i]);
    }
    printf("%c\n", ans[i]);

    return 0;
}