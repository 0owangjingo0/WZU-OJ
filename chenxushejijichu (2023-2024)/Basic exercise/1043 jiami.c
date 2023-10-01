#include <stdio.h>

int jiami(int ch);
int is_zimu(int ch);

int main()
{
    int ch;
    ch = getchar();

    while (ch != EOF)
    {
        while (ch != '\n')
        {
            if (is_zimu(ch))
            {
                printf("%d", jiami(ch));
            }
            else
            {
                putchar(ch);
            }
            ch = getchar();
        }
        putchar('\n');
        ch = getchar();
    }

    return 0;
}

int jiami(int ch)
{
    if (
        (ch >= 'a')
        &&
        (ch <= 'z')
    )
    {
        return ch - 'a' + 1;
    }
    else
    {
        return ch - 'A' + 27;
    }
}

int is_zimu(int ch)
{
    if (
        (ch >= 'a' && ch <= 'z')
        ||
        (ch >= 'A' && ch <= 'Z')
    )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}