#include <stdio.h>
#include <string.h>

int main(void)
{
    char num[100][100];
    int xm[100][100];
    int sex[100][100];
    double x[100];
    double y[100];
    double z[100];
    int p = 0;

    char insert[] = "Insert";
    char lst[] = "List";
    char quit[] = "Quit";
    char exit[] = "Exit";
    char str[100];

    scanf("%s", str);
    while (strcmp(quit, str) != 0 && strcmp(exit, str) != 0)
    {
        if (strcmp(insert, str) == 0)
        {
            scanf("%s %s %s %lf %lf %lf",
            num[p],
            xm[p],
            sex[p],
            &x[p],
            &y[p],
            &z[p]
            );

            printf("Insert:\n");
            printf("%s %s %s %.1lf %.1lf %.1lf\n",
            num[p],
            xm[p],
            sex[p],
            x[p],
            y[p],
            z[p]
            );
            p++;
        }
        else if (strcmp(lst, str) == 0)
        {
            printf("List:\n");
            for (int i = 0; i < p; i++)
            {
                printf("%s %s %s %.1lf %.1lf %.1lf\n",
                num[i],
                xm[i],
                sex[i],
                x[i],
                y[i],
                z[i]
                );
            }
        }
        scanf("%s", str);
    }
    printf("Good bye!\n");
    return 0;
}