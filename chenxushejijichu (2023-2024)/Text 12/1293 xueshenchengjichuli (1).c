#include <stdio.h>

void bobble_sort(double lst[][4]);

int main(void)
{
    double lst[5][4];

    for (int i = 0; i < 5; i++)
    {
        scanf("%lf %lf %lf", &lst[i][0], &lst[i][1], &lst[i][2]);
        lst[i][3] = lst[i][0] + lst[i][1] + lst[i][2];
    }

    bobble_sort(lst);

    for (int i = 0; i < 5; i++)
    {
        printf("%.1lf %.1lf %.1lf %.1lf\n", lst[i][0], lst[i][1], lst[i][2], lst[i][3]);
    }


}

void bobble_sort(double lst[][4])
{
    int i, j;
    double temp[4];
    for (i = 0; i < 5 - 1; i++)
    {
        for (j = 0; j < 5 - i - 1; j++)
        {
            if (lst[j][3] < lst[j + 1][3])
            {
                temp[0] = lst[j][0];
                temp[1] = lst[j][1];
                temp[2] = lst[j][2];
                temp[3] = lst[j][3];

                lst[j][0] = lst[j + 1][0];
                lst[j][1] = lst[j + 1][1];
                lst[j][2] = lst[j + 1][2];
                lst[j][3] = lst[j + 1][3];

                lst[j + 1][0] = temp[0];
                lst[j + 1][1] = temp[1];
                lst[j + 1][2] = temp[2];
                lst[j + 1][3] = temp[3];
            }
        }
    }
}