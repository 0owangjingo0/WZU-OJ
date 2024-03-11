#include <stack>
#include <stdio.h>

int main(void)
{
    std::stack <int> s;
    char ch;

    while (ch = getchar(), ch != '\n')
    {
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