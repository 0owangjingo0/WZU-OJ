#include <stdio.h>
#include <string.h>

int main(void)
{
    char num[100][40];
    char name[100][40];
    char sex[100][5];
    double ch[100];
    double ma[100];
    double en[100];
    double av[100];
    double sum[100];
    int p = 0;

    char insert[] = "INSERT";
    char lst[] = "LIST";
    char quit[] = "QUIT";
    char str[100];

    scanf("%s", str);
    while (strcmp(quit, str) != 0)
    {
        if (strcmp(insert, str) == 0)
        {
            scanf(
                "%s %s %s %lf %lf %lf",
                num[p],
                name[p],
                sex[p],
                &ch[p],
                &ma[p],
                &en[p]
            );

            av[p] = (ch[p] + ma[p] + en[p]) / 3;
            sum[p] = ch[p] + ma[p] + en[p];

            printf(
                "%s %s %s %.2lf %.2lf %.2lf %.2lf %.2lf\n",
                num[p],
                name[p],
                sex[p],
                ch[p],
                ma[p],
                en[p],
                av[p],
                sum[p]
            );
            p++;
        }
        else if (strcmp(lst, str) == 0)
        {
            for (int i = 0; i < p; i++)
            {
                printf(
                    "%s %s %s %.2lf %.2lf %.2lf %.2lf %.2lf\n",
                    num[i],
                    name[i],
                    sex[i],
                    ch[i],
                    ma[i],
                    en[i],
                    av[i],
                    sum[i]
                );
            }
        }
        scanf("%s", str);
    }
    printf("Good bye!\n");
    return 0;
}