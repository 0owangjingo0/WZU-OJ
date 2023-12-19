#include <stdio.h>

int main(void)
{
    char ch;
    ch = getchar();

    while (ch != 'E')
    {
        int lst[3] = {0};
        while (ch != '\n')
        {
            if (ch == 'W')
            {
                lst[0]++;
            }
            else if (ch == 'O')
            {
                lst[1]++;
            }
            else if (ch == 'J')
            {
                lst[2]++;
            }
            ch = getchar();
        }

        int max = 0;
        max = (lst[0] > lst[1]) ? lst[0] : lst[1];
        max = (max > lst[2]) ? max : lst[2];

        for (int i = 0; i < max; i++)
        {
            if (lst[0] > 0)
            {
                printf("W");
                lst[0]--;
            }
            if (lst[1] > 0)
            {
                printf("O");
                lst[1]--;
            }
            if (lst[2] > 0)
            {
                printf("J");
                lst[2]--;
            }
        }
        putchar('\n');
        ch = getchar();
    }

    return 0;
}