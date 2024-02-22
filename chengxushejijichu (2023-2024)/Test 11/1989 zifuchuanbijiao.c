#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();

    while (n--)
    {
        char s1[1001], s2[1001];
        gets(s1);
        gets(s2);

        int i;
        for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
        {
            if (s1[i] != s2[i])
            {
                printf("%d\n", s1[i] - s2[i]);
                break;
            }
        }

        if (s1[i] == '\0' && s2[i] == '\0')
        {
            printf("0\n");
        } else if (s1[i] == '\0')
        {
            printf("%d\n", s1[i] - s2[i]);
        } else if (s2[i] == '\0')
        {
            printf("%d\n", s1[i] - s2[i]);
        }
    }

    return 0;
}
