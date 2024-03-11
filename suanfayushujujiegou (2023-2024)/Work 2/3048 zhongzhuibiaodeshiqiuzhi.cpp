#include <stack>
#include <stdio.h>
#include <vector>
#include <map>

std::vector <char> fun();

int main(void)
{
    std::stack <int> s;
    std::vector <char> v = fun();
    char ch;

    for (std::vector <char>::iterator it = v.begin(); it != v.end(); it++)
    {
        ch = *it;
        if (ch == ' ')
        {
            continue;
        }
        if (ch >= '0' && ch <= '9')
        {
            s.push(ch - '0');
        }
        else
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            switch (ch)
            {
                case '+':
                    s.push(a + b);
                    break;
                case '-':
                    s.push(b - a);
                    break;
                case '*':
                    s.push(a * b);
                    break;
                case '/':
                    s.push(b / a);
                    break;
            }
        }
    }

    printf("%d\n", s.top());
    return 0;
}

std::vector <char> fun()
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

    return ans;
}