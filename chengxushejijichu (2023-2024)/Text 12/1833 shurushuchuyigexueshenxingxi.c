#include <stdio.h>
#include <string.h>

int main(void)
{
    char num[100][100];
    char xm[100][100];
    char sex[100][100];
    int year[100];
    int month[100];
    int day[100];
    double x[100];
    double y[100];
    double z[100];
    double arv[100];
    double sum[100];
    int p = 0;

    char insert[] = "Insert";
    char quit[] = "Quit";
    char exit[] = "Exit";
    char str[100];

    scanf("%s", str);
    while (strcmp(quit, str) != 0 && strcmp(exit, str) != 0)
    {
        if (strcmp(insert, str) == 0)
        {
            scanf("%s %s %s %d %d %d %lf %lf %lf",
            num[p],
            xm[p],
            sex[p],
            &year[p],
            &month[p],
            &day[p],
            &x[p],
            &y[p],
            &z[p]
            );

            sum[p] = x[p] + y[p] + z[p];
            arv[p] = sum[p] / 3;

            printf("Insert:\n");
            printf("%s %s %s %d %d %d %.1lf %.1lf %.1lf %.1lf %.1lf\n",
            num[p],
            xm[p],
            sex[p],
            year[p],
            month[p],
            day[p],
            x[p],
            y[p],
            z[p],
            arv[p],
            sum[p]
            );
            p++;
        }
    
        scanf("%s", str);
    }
    printf("Good bye!\n");
    return 0;
}