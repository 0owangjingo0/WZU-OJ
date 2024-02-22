#include <stdio.h>

int main(void)
{
    char str1[100];
    char str2[100];

    while (scanf("%s %s", str1, str2) != EOF)
    {
        int i = 0;
        int j = 0;

        while (str1[i] != '\0' && str2[j] != '\0')
        {
            if (str1[i] == str2[j])
            {
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }

        if (str1[i] != '\0')
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    return 0;
}