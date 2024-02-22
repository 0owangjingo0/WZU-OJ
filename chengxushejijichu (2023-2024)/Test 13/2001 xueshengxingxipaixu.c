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
    char sort_by_num[] = "byid";
    char sort_by_birthday[] = "bybirthday";
    char sort_by_sum[] = "bysum";
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
        else if (strcmp("Sort", str) == 0)
        {
            scanf("%s", str);
            if (strcmp(sort_by_num, str) == 0)
            {
                printf("Sort:\n");

                for (int i = 0; i < p - 1; i++)
                {
                    for (int j = 0; j < p - 1 - i; j++)
                    {
                        if (strcmp(num[j], num[j + 1]) > 0)
                        {
                            char temp1[100];
                            strcpy(temp1, num[j]);
                            strcpy(num[j], num[j + 1]);
                            strcpy(num[j + 1], temp1);

                            strcpy(temp1, name[j]);
                            strcpy(name[j], name[j + 1]);
                            strcpy(name[j+1], temp1);

                            strcpy(temp1, sex[j]);
                            strcpy(sex[j], sex[j+1]);
                            strcpy(sex[j+1], temp1);

                            int temp2;
                            temp2 = year[j];
                            year[j] = year[j+1];
                            year[j+1] = temp2;

                            temp2 = month[j];
                            month[j] = month[j+1];
                            month[j+1] = temp2;

                            temp2 = day[j];
                            day[j] = day[j+1];
                            day[j+1] = temp2;

                            double temp3;
                            temp3 = x[j];
                            x[j] = x[j+1];
                            x[j+1] = temp3;

                            temp3 = y[j];
                            y[j] = y[j+1];
                            y[j+1] = temp3;

                            temp3 = z[j];
                            z[j] = z[j+1];
                            z[j+1] = temp3;

                            temp3 = sum[j];
                            sum[j] = sum[j+1];
                            sum[j+1] = temp3;

                            temp3 = avg[j];
                            avg[j] = avg[j+1];
                            avg[j+1] = temp3;
                        }
                    }
                }

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
            else if (strcmp(sort_by_birthday, str) == 0)
            {
                printf("Sort:\n");

                for (int i = 0; i < p - 1; i++)
                {
                    for (int j = 0; j < p - 1 - i; j++)
                    {
                        if (
                            year[j] > year[j+1] ||
                            (
                                year[j] == year[j+1] &&
                                month[j] > month[j+1]
                            ) ||
                            (
                                year[j] == year[j+1] &&
                                month[j] == month[j+1] &&
                                day[j] > day[j+1]
                            )
                            )
                        {
                            char temp4[100];
                            strcpy(temp4, num[j]);
                            strcpy(num[j], num[j + 1]);
                            strcpy(num[j + 1], temp4);

                            strcpy(temp4, name[j]);
                            strcpy(name[j], name[j + 1]);
                            strcpy(name[j+1], temp4);

                            strcpy(temp4, sex[j]);
                            strcpy(sex[j], sex[j+1]);
                            strcpy(sex[j+1], temp4);

                            int temp5;
                            temp5 = year[j];
                            year[j] = year[j+1];
                            year[j+1] = temp5;

                            temp5 = month[j];
                            month[j] = month[j+1];
                            month[j+1] = temp5;

                            temp5 = day[j];
                            day[j] = day[j+1];
                            day[j+1] = temp5;

                            double temp6;
                            temp6 = x[j];
                            x[j] = x[j+1];
                            x[j+1] = temp6;

                            temp6 = y[j];
                            y[j] = y[j+1];
                            y[j+1] = temp6;

                            temp6 = z[j];
                            z[j] = z[j+1];
                            z[j+1] = temp6;

                            temp6 = sum[j];
                            sum[j] = sum[j+1];
                            sum[j+1] = temp6;

                            temp6 = avg[j];
                            avg[j] = avg[j+1];
                            avg[j+1] = temp6;
                        }
                    }
                }

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
            else if (strcmp(sort_by_sum, str) == 0)
            {
                printf("Sort:\n");

                for (int i = 0; i < p - 1; i++)
                {
                    for (int j = 0; j < p - 1 - i; j++)
                    {
                        if (sum[j] > sum[j + 1])
                        {
                            char temp7[100];
                            strcpy(temp7, num[j]);
                            strcpy(num[j], num[j + 1]);
                            strcpy(num[j + 1], temp7);

                            strcpy(temp7, name[j]);
                            strcpy(name[j], name[j + 1]);
                            strcpy(name[j+1], temp7);

                            strcpy(temp7, sex[j]);
                            strcpy(sex[j], sex[j+1]);
                            strcpy(sex[j+1], temp7);

                            int temp8;
                            temp8 = year[j];
                            year[j] = year[j+1];
                            year[j+1] = temp8;

                            temp8 = month[j];
                            month[j] = month[j+1];
                            month[j+1] = temp8;

                            temp8 = day[j];
                            day[j] = day[j+1];
                            day[j+1] = temp8;

                            double temp9;
                            temp9 = x[j];
                            x[j] = x[j+1];
                            x[j+1] = temp9;

                            temp9 = y[j];
                            y[j] = y[j+1];
                            y[j+1] = temp9;

                            temp9 = z[j];
                            z[j] = z[j+1];
                            z[j+1] = temp9;

                            temp9 = sum[j];
                            sum[j] = sum[j+1];
                            sum[j+1] = temp9;

                            temp9 = avg[j];
                            avg[j] = avg[j+1];
                            avg[j+1] = temp9;
                        }
                    }
                }

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