#include <stdio.h>

int main(void)
{
    char ch;
    char ascii[128] = {0};
    
    while ((ch = getchar()) != EOF)
    {
        if (ch != '\n')
        {
            ascii[ch]++;
        }
    }

    for (int i = 0; i < 128; i++)
    {
        for (int j = 0; j < ascii[i]; j++)
        {
            putchar(i);
        }
    }
    putchar('\n');

    return 0;
}