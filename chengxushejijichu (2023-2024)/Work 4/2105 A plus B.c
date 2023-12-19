#include <stdio.h>

int main(void)
{
    int a, b, d;
    char c;

    scanf("%d%c%d", &a, &c, &b);
    
    if (c == '+')
    {
        d = a + b;
    }
    else if (c == '-')
    {
        d = a - b;
    }
    else if (c == '*')
    {
        d = a * b;
    }
    else
    {
        d = a / b;
    }

    printf("%d\n", d);


    return 0;
}