#include <stdio.h>

int main(void)
{
    int ch;
    ch = getchar();

    while (
        (ch != EOF)
    )
    {
        int lst[100];
        int p = 0;
        int max = 0;
        

        while (ch != '\n')
        {
            lst[p] = ch;
            p++;

            if (ch > max)
            {
                max = ch;
            }
            ch = getchar();
        }

        for (int i=0; i < p; i++)
        {
            if (lst[i] == max)
            {
                printf("%c(max)", lst[i]);
            }
            else
            {
                printf("%c", lst[i]);
            }
        }
        putchar('\n');
        ch = getchar();
    }
    return 0;
}