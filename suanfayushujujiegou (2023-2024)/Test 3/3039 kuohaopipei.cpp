#include <stack>
#include <stdio.h>
#include <map>

int main(void)
{
    std::map <char, char> m;
    m[')'] = '(';
    m[']'] = '[';
    m['}'] = '{';

    std::stack<char> s;
    char ch;
    int flag = 1;
    while (ch = getchar(), ch != EOF)
    {
        if (ch == '(' || ch == '[' || ch == '{')
        {
            s.push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}')
        {
            if (s.empty())
            {
                flag = 0;
                break;
            }
            if (s.top() != m[ch])
            {
                flag = 0;
                break;
            }
            s.pop();
        }
    }

    if (!s.empty())
    {
        flag = 0;
    }

    if (flag)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
}