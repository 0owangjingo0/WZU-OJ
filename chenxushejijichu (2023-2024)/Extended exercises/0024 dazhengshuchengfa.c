#include <stdio.h>
#include <string.h>

int main()
{
    char num1[201], num2[201];
    int result[402] = {0};
    scanf("%s %s", num1, num2);

    int len1 = strlen(num1);
    int len2 = strlen(num2);

    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            result[i + j] += (num1[len1 - i - 1] - '0') * (num2[len2 - j - 1] - '0');
        }
    }

    for (int i = 0; i < len1 + len2; i++)
    {
        if (result[i] >= 10)
        {
            result[i + 1] += result[i] / 10;
            result[i] %= 10;
        }
    }

    int len = len1 + len2;
    while (len > 0 && result[len] == 0)
    {
        len--;
    }

    for (int i = len; i >= 0; i--)
    {
        printf("%d", result[i]);
    }
    putchar('\n');

    return 0;
}