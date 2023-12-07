#include <stdio.h>

int main(void)
{
    char ch;
    int flag = 0;
    while ((ch = getchar()) != EOF)
    {
        if (flag)
        {
            printf("\n");
        }
        flag = 1;
        int lst[26] = {0};

        while (ch != '\n' && ch != EOF)
        {
            lst[ch - 'a'] = 1;
            ch = getchar();
        }

        int count = 0;
        for (int i = 0; i < 26; i++)
        {
            if (lst[i] == 1)
            {
                count++;
            }
        }

        printf("%d\n", count);
    }
    return 0;
}