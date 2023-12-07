#include <stdio.h>
#include <string.h>

int main()
{
    char num1[201], num2[201], sum[202] = {0};
    scanf("%s %s", num1, num2);

    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int max_len = len1 > len2 ? len1 : len2;

    for (int i = 0; i < max_len; i++)
    {
        if (i < len1)
        {
            sum[i] += num1[len1 - i - 1] - '0';
        }
        if (i < len2)
        {
            sum[i] += num2[len2 - i - 1] - '0';
        }
        if (sum[i] >= 10)
        {
            sum[i] -= 10;
            sum[i + 1]++;
        }
    }

    if (sum[max_len] != 0)
    {
        max_len++;
    }

    for (int i = max_len - 1; i >= 0; i--)
    {
        printf("%d", sum[i]);
    }
    printf("\n");

    return 0;
}