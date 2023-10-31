#include <stdio.h>
#include <string.h>

int main(void)
{
    char num[100][20];
    char name[100][20];
    double score[100][3];
    double sum[100];
    int p = 0;

    while (
        scanf(
            "%s %s %lf %lf %lf",
            num[p],
            name[p],
            &score[p][0],
            &score[p][1],
            &score[p][2]
            ) != EOF
    )
    {
        sum[p] = score[p][0] + score[p][1] + score[p][2];
        p++;
    }

    for (int i = 0; i < p; i++)
    {
        printf(
            "%s %s %.1lf %.1lf %.1lf %.1lf\n",
            num[i],
            name[i],
            score[i][0],
            score[i][1],
            score[i][2],
            sum[i] / 3
            );
    }

    return 0;
}