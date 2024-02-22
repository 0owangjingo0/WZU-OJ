#include <stdio.h>

int main(void)
{
    char ch;
    
    while ((ch = getchar()) != '\n')
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch -= 32;
        }
        putchar(ch);
    }
    putchar('\n');
    return 0;
}