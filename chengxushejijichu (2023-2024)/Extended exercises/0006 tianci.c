#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    getchar();

    int lst[26] = {0};

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            char temp;
            scanf("%c", &temp);
            lst[temp - 'A']++;
        }
        getchar();
    }

    for (int i = 0; i < c; i++)
    {
        char temp;
        scanf("%c", &temp);
        while (temp != '\n')
        {
            lst[temp - 'A']--;
            scanf("%c", &temp);
        }
    }

    for (int i = 0; i < 26; i++)
    {
        while (lst[i] != 0)
        {
            printf("%c", i + 'A');
            lst[i]--;
        }
    }
    putchar('\n');

    return 0;
}