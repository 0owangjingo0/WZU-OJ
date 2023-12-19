#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_STR_LEN 100

int main(void)
{
    char str[MAX_STR_LEN] = {0};
    fgets(str, MAX_STR_LEN, stdin);
    //gets(str);
    int len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }

    while (!(len == 1 && str[0] == '0'))
    {
        long long int ans = 0LL;

        for (int i = 0; i < len; i++)
        {
            ans += (str[i] - '0')*(pow(2, len - i) - 1);
        }

        printf("%lld\n", ans);
        fgets(str, MAX_STR_LEN, stdin);
        len = strlen(str);
        if (str[len - 1] == '\n')
        {
            str[len - 1] = '\0';
            len--;
        }
    }
    return 0;
}