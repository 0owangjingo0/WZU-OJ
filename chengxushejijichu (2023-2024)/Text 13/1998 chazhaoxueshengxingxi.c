#include <stdio.h>
#include <string.h>

int main(void)
{
    char num[100][20];
    char name[100][20];
    char sex[100][5];
    int year[100];
    int month[100];
    int day[100];
    double x[100];
    double y[100];
    double z[100];
    double avg[100];
    double sum[100];
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
            printf("Insert:\n");
            scanf("%s", num[p]);
            int flag = 1;
            for (int i = 0; i < p; i++)
            {
                if (strcmp(num[i], num[p]) == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                scanf(
                "%s %s %d %d %d %lf %lf %lf",
                name[p],
                sex[p],
                &year[p],
                &month[p],
                &day[p],
                &x[p],
                &y[p],
                &z[p]
                );

                sum[p] = x[p] + y[p] + z[p];
                avg[p] = sum[p] / 3.0;

                printf(
                    "%s %s %s %d %d %d %.1lf %.1lf %.1lf %.1lf %.1lf\n",
                    num[p],
                    name[p],
                    sex[p],
                    year[p],
                    month[p],
                    day[p],
                    x[p],
                    y[p],
                    z[p],
                    avg[p],
                    sum[p]
                );
                p++;
            }
            else
            {
                printf("Failed\n");
                scanf(
                    "%s %s %d %d %d %lf %lf %lf",
                    name[p],
                    sex[p],
                    &year[p],
                    &month[p],
                    &day[p],
                    &x[p],
                    &y[p],
                    &z[p]
                );
            }
            
        }
        else if (strcmp(lst, str) == 0)
        {
            printf("List:\n");
            for (int i = 0; i < p; i++)
            {
                printf(
                    "%s %s %s %d %d %d %.1lf %.1lf %.1lf %.1lf %.1lf\n",
                    num[i],
                    name[i],
                    sex[i],
                    year[i],
                    month[i],
                    day[i],
                    x[i],
                    y[i],
                    z[i],
                    avg[i],
                    sum[i]
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
                    printf(
                        "%s %s %s %d %d %d %.1lf %.1lf %.1lf %.1lf %.1lf\n",
                        num[i],
                        name[i],
                        sex[i],
                        year[i],
                        month[i],
                        day[i],
                        x[i],
                        y[i],
                        z[i],
                        avg[i],
                        sum[i]
                        );
                    flag = 1;
                    break;
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
                scanf(
                    "%s %s %d %d %d %lf %lf %lf",
                    name[j],
                    sex[j],
                    &year[j],
                    &month[j],
                    &day[j],
                    &x[j],
                    &y[j],
                    &z[j]
                    );

                sum[j] = x[j] + y[j] + z[j];
                avg[j] = sum[j] / 3.0;
                
                printf(
                    "%s %s %s %d %d %d %.1lf %.1lf %.1lf %.1lf %.1lf\n",
                    num[j],
                    name[j],
                    sex[j],
                    year[j],
                    month[j],
                    day[j],
                    x[j],
                    y[j],
                    z[j],
                    avg[j],
                    sum[j]
                    );
            }
            else
            {
                scanf(
                    "%s %s %d %d %d %lf %lf %lf",
                    name[p],
                    sex[p],
                    &year[p],
                    &month[p],
                    &day[p],
                    &x[p],
                    &y[p],
                    &z[p]
                    );
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
                    strcpy(num[i-1], num[i]);
                    strcpy(name[i-1], name[i]);
                    strcpy(sex[i-1], sex[i]);
                    year[i-1] = year[i];
                    month[i-1] = month[i];
                    day[i-1] = day[i];
                    x[i-1] = x[i];
                    y[i-1] = y[i];
                    z[i-1] = z[i];
                    sum[i-1] = sum[i];
                    avg[i-1] = avg[i];
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