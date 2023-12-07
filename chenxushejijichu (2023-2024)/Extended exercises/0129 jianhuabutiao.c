#include <stdio.h>

int main(void)
{
    while (1)
    {
        char str1[1001];
        char str2[1001];
        int p1 = 0;
        int p2 = 0;

        scanf("%s", str1);
        if (str1[0] == '#')
        {
            break;
        }
        scanf(" %s", str2);

        int count = 0;

        while (str1[p1] != '\0')
        {
            if (str1[p1] == str2[p2])
            {
                p1++;
                p2++;
            }
            else
            {
                p1++;
                p2 = 0;
            }
            if (str2[p2] == '\0')
            {
                count++;
                p2 = 0;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}