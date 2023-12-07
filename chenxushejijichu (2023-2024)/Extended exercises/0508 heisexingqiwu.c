#include <stdio.h>

int is_runnian(int year);
void sum_day(int n, int day_of_13[]);

int main(void)
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        int day_of_13[7] = {0};
        sum_day(n, day_of_13); 

        printf("%d ", day_of_13[6]);
        for (int i = 0; i < 5; i++)
        {
            printf("%d ", day_of_13[i]);
        }
        printf("%d\n", day_of_13[5]);
    }
    return 0;
}

int is_runnian(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
    {
        return 1;
    }
    else if (year % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void sum_day(int n, int day_of_13[])
{
    int month_day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    //起始年份1900年
    //1990年1月1日是星期一
    int week = 1;
    for (int i = 0; i < n; i++)
    {
        int year = 1900 + i;
        if (is_runnian(year))
        {
            month_day[1] = 29;
        }
        else
        {
            month_day[1] = 28;
        }
        for (int j = 0; j < 12; j++)
        {
            for (int k = 0; k < month_day[j]; k++)
            {
                if (k == 12)
                {
                    day_of_13[week]++;
                }
                week = (week + 1) % 7;
            }
        }
    }
}