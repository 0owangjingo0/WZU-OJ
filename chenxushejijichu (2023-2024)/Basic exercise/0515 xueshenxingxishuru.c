#include <stdio.h>

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

    return 0;
}