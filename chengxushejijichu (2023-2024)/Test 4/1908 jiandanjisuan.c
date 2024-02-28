#include <stdio.h>

int fun(char ch);

int main(void)
{   
    char ch;
    int y;

    scanf("%c %d", &ch, &y);

    printf("%d\n", fun(ch)+y);

    return 0;
}

int fun(char ch)
{
    int a;

    if (ch >= 'a')
    {
        a = ch - 'a' + 1;
        a = -a;
    }
    else
    {
        a = ch - 'A' + 1;
    }

    return a;
}