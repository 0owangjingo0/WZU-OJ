#include <stdio.h>
#include <string.h>

int convert(char *num, int base, int len)
{
    int result = 0;
    for (int i = 0; i < len; i++) {
        result = result * base + (num[i] - '0');
    }
    return result;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    while(n--)
    {
        char a[10];
        char b[10];
        char c[10];

        scanf("%s %s %s", a, b, c);
        int lena = strlen(a);
        int lenb = strlen(b);
        int lenc = strlen(c);
        int max_len = lena > lenb ? lena : lenb;
        max_len = max_len > lenc ? max_len : lenc;
        
        int max_element = 0;
        for (int i = 0; i < max_len; i++)
        {
            max_element = max_element > a[i] ? max_element : a[i];
            max_element = max_element > b[i] ? max_element : b[i];
            max_element = max_element > c[i] ? max_element : c[i];
        }


        int i;
        for (i = max_element - '0' + 1; i <= 16; i++)
        {
            int p = convert(a, i, lena);
            int q = convert(b, i, lenb);
            int r = convert(c, i, lenc);
            if (p * q == r)
            {
                printf("%d\n", i);
                break;
            }
        }

        if (i > 16) {
            printf("0\n");
        }
    }
    return 0;
}