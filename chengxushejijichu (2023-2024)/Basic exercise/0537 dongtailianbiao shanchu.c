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
    char find[] = "Find";
    char change[] = "Change";
    char del[] = "Delete";
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
        else if (strcmp(find, str) == 0)
        {
            char id[100];
            scanf("%s", id);
            printf("Find:\n");
            int flag = 0;
            for (int i = 0; i < p; i++)
            {
                if (strcmp(num[i], id) == 0)
                {
                    printf("%s %s %s %.1lf %.1lf %.1lf\n",
                    num[i],
                    xm[i],
                    sex[i],
                    x[i],
                    y[i],
                    z[i]
                    );
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                printf("Failed\n");
            }
        }
        else if (strcmp(change, str) == 0)
        {
            char id[100];
            scanf("%s", id);
            printf("Change:\n");
            int flag = 0;
            int j;
            for (int i = 0; i < p; i++)
            {
                if (strcmp(num[i], id) == 0)
                {
                    j = i;
                    flag = 1;
                }
            }
            if (flag)
            {
                scanf("%s %s %lf %lf %lf",
                xm[j],
                sex[j],
                &x[j],
                &y[j],
                &z[j]
                );
                printf("%s %s %s %.1lf %.1lf %.1lf\n",
                num[j],
                xm[j],
                sex[j],
                x[j],
                y[j],
                z[j]
                );

            }
            else
            {
                printf("Failed\n");
            }
        }
        else if (strcmp(del, str) == 0)
        {
            char id[100];
            scanf("%s", id);
            printf("Delete:\n");
            int flag = 0;
            int j;
            for (int i = 0; i < p; i++)
            {
                if (strcmp(num[i], id) == 0)
                {
                    j = i;
                    flag = 1;
                }
            }
            if (flag)
            {
                for (int i=j+1; i < p; i++)
                {
                    *num[i] = *num[i-1];
                    *xm[i] = *xm[i-1];
                    *sex[i] = *sex[i-1];
                    x[i] = x[i-1];
                    y[i] = y[i-1];
                    z[i] = z[i-1];
                }
                p--;
                printf("Deleted\n");
            }
            else
            {
                printf("Failed\n");
            }
        }
        scanf("%s", str);
    }
    printf("Good bye!\n");
    return 0;
}