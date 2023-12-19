#include <stdio.h>

void sort(int n, double *lst);

int main(void)
{
    double lst[3];

    scanf("%lf %lf %lf", &lst[0], &lst[1], &lst[2]);
    sort(3, lst);
    printf("%.2lf\n", lst[0]);

    return 0;
}

void sort(int n, double *lst)
{
    double temp;

    for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-1-i; j++)
        {
            if (lst[j] > lst[j+1])
            {
                temp = lst[j+1];
                lst[j+1] = lst[j];
                lst[j] = temp;
            }
        }
    }
}