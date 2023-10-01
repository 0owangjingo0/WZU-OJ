#include <stdio.h>

int main(void)
{
    int ch;
    int lst[100] = {0};

    while ((ch=getchar()) != '\n')
    {
        if (
            (ch >= 'A') && (ch <= 'Z')
        )
        {
            lst[ch-'A'] += 1;
            
            if (lst[ch-'A'] == 1)
            {
                putchar(ch);
                putchar(' ');
            }
        }
    }
    putchar('\n');

    return 0;
}