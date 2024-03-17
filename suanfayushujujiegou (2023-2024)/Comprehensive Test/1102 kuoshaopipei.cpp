#include <stack>
#include <stdio.h>
#include <map>

void fun();

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        fun();
    }
    return 0;
}

void fun()
{
    std::map <char, char> m;
    m[')'] = '(';
    m[']'] = '[';
    m['}'] = '{';

    std::stack<char> s;
    char str[1000];
    scanf("%s", str);
    char ch;
    int flag = 1;
    for (int i = 0; (ch = str[i]) != '\0'; i++)
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
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}