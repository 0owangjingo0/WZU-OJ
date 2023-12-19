#include <stdio.h>
#include <string.h>

#define MAX 110

int main(void)
{
    int lword[26] = {0};
    int uword[26] = {0};

    char ch;
    ch = getchar();

    while (ch != EOF)
    {
        while (ch != '\n')
        {
            if (ch >= 'a' && ch <= 'z')
            {
                lword[ch - 'a']++;
            }
            else if (ch >= 'A' && ch <= 'Z')
            {
                uword[ch - 'A']++;
            }
            ch = getchar();
        }
        ch = getchar();
    }
    
    for (int i = 0; i < 26; i++)
    {
        while (lword[i] != 0)
        {
            putchar('a' + i);
            lword[i]--;
        }
        while (uword[i] != 0)
        {
            putchar('A' + i);
            uword[i]--;
        }
    }
    putchar('\n');
    return 0;
}