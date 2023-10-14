#include <stdio.h>

int str_compare(char str1[], char str2[]);
void str_sort(char **str, int n);

int main(void)
{
    int n;
    char str[100][100];
    char *p[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
        p[i] = str[i];
    }

    str_sort(p, n);

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", p[i]);
    }

    return 0;
}

int str_compare(char str1[], char str2[])
{
    int a = 0;

    while (str1[a] != '\0' && str2[a] != '\0')
    {
        if (str1[a] > str2[a])
        {
            return 1;
        }
        else if (str1[a] < str2[a])
        {
            return 0;
        }
        else
        {
            a++;
        }
    }

    if (str1[a] == '\0' && str2[a] == '\0')
    {
        return 0;
    }
    else if (str1[a] == '\0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void str_sort(char **str, int n)
{
    char *temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (str_compare(str[j], str[j + 1]))
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}