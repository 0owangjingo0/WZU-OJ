#include <stdio.h>
#include <string.h>

void strlower(char * str);

int main(void)
{
    char num[100][100];
    char xm[100][100];
    int sex[100][100];
    int x[100];
    int y[100];
    int z[100];
    int s[100];
    int p = 0;

    char insert[] = "Insert";
    char lst[] = "Statistics";
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
            scanf("%s", xm[p]);
            strlower(xm[p]);
            printf("Inserted\n");
            
            scanf("%s %s %d %d %d",
            num[p],
            sex[p],
            &x[p],
            &y[p],
            &z[p]
            );
            s[p] = x[p] + y[p] + z[p];
            p++;
        }
        else if (strcmp(lst, str) == 0)
        {

            for (int i = 0; i < p - 1; i++)
            {
                for (int j = 0; j < p - i - 1; j++)
                {
                    if (strcmp(num[j], num[j+1]) > 0)
                    {
                        char temp[100];
                        strcpy(temp, num[j]);
                        strcpy(num[j], num[j+1]);
                        strcpy(num[j+1], temp);

                        char temp1[100];
                        strcpy(temp, xm[j]);
                        strcpy(xm[j], xm[j+1]);
                        strcpy(xm[j+1], temp);

                        int temp3[100];
                        memcpy(temp3, sex[j], sizeof(int) * 100);
                        memcpy(sex[j], sex[j+1], sizeof(int) * 100);
                        memcpy(sex[j+1], temp3, sizeof(int) * 100);

                        int temp2 = x[j];
                        x[j] = x[j+1];
                        x[j+1] = temp2;

                        temp2 = y[j];
                        y[j] = y[j+1];
                        y[j+1] = temp2;

                        temp2 = z[j];
                        z[j] = z[j+1];
                        z[j+1] = temp2;

                        temp2 = s[j];
                        s[j] = s[j+1];
                        s[j+1] = temp2;
                    }
                }
            }
            double sum[3] = {0};
            int f[3] = {0};
            int a[3] = {0};

            for (int i = 0; i < p; i++)
            {
                printf("%s %s %s %d %d %d %d\n",
                xm[i],
                num[i],
                sex[i],
                x[i],
                y[i],
                z[i],
                s[i]
                );

                sum[0] += x[i];
                sum[1] += y[i];
                sum[2] += z[i];

                if (x[i] < 60)
                {
                    f[0]++;
                }
                if (y[i] < 60)
                {
                    f[1]++;
                }
                if (z[i] < 60)
                {
                    f[2]++;
                }

                if (x[i] >= 90)
                {
                    a[0]++;
                }
                if (y[i] >= 90)
                {
                    a[1]++;
                }
                if (z[i] >= 90)
                {
                    a[2]++;
                }
            }
            printf("%.1lf %.1lf %.1lf\n", sum[0]/p, sum[1]/p, sum[2]/p);
            printf("%d %d %d\n", f[0], f[1], f[2]);
            printf("%d %d %d\n", a[0], a[1], a[2]);
        }
        else if (strcmp(find, str) == 0)
        {
            char id[100];
            scanf("%s", id);
            strlower(id);
            int flag = 0;
            for (int i = 0; i < p; i++)
            {
                if (strcmp(num[i], id) == 0 || strcmp(xm[i], id) == 0)
                {
                    printf("%s %s %s %d %d %d %d\n",
                    xm[i],
                    num[i],
                    sex[i],
                    x[i],
                    y[i],
                    z[i],
                    s[i]
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
            strlower(id);
            int flag = 0;
            int j;
            for (int i = 0; i < p; i++)
            {
                if (strcmp(num[i], id) == 0 || strcmp(xm[i], id) == 0)
                {
                    j = i;
                    if (strcmp(num[i], id) == 0)
                        flag = 1;
                    else
                    {
                        flag = 2;
                    }
                }
            }
            if (flag)
            {
                scanf("%s %s %s %lf %lf %lf",
                xm[j],
                num[j],
                sex[j],
                &x[j],
                &y[j],
                &z[j]
                );
                printf("Changed\n");

            }
            else
            {
                printf("Failed\n");
            }
        }
        else if (strcmp(del, str) == 0)
        {
            char id[100] = {0};
            scanf("%s", id);
            strlower(id);
            int flag = 0;
            int j;
            for (int i = 0; i < p; i++)
            {
                if (strcmp(num[i], id) == 0 || strcmp(xm[i], id) == 0)
                {
                    j = i;
                    flag = 1;
                }
            }
            if (flag)
            {
                for (int i = j; i < p - 1; i++)
                {
                    strcpy(num[i], num[i+1]);
                    strcpy(xm[i], xm[i+1]);
                    memcpy(sex[i], sex[i+1], sizeof(int) * 100);
                    x[i] = x[i+1];
                    y[i] = y[i+1];
                    z[i] = z[i+1];
                    s[i] = s[i+1];
                }
                memset(num[p-1], 0, sizeof(num[p-1]));
                memset(xm[p-1], 0, sizeof(xm[p-1]));
                memset(sex[p-1], 0, sizeof(sex[p-1]));
                x[p-1] = 0;
                y[p-1] = 0;
                z[p-1] = 0;
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

void strlower(char * str)
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
}