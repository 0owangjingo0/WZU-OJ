#include <stdio.h>

int main(void)
{
    char s[1000];
    char t[1000];

    gets(s);
    gets(t);
    int i = 0;
    int j = 0;
    int k = 0;
    int tk = 0;
    int flag = 0;
    int tflag = 0;

    while (s[i] != '\0')
    {
        if (s[i] == t[j])
        {
            if (!tflag)
            {
                tk = i;
                tflag = 1;
            }
            i++;
            j++;
        }
        else if (t[j] == '\0')
        {
            flag = 1;
            k = tk;
            j = 0;
        }
        else
        {
            i++;
            j = 0;
            tflag = 0;
        }
    }

    if (flag)
    {
        printf("%d\n", k);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}  