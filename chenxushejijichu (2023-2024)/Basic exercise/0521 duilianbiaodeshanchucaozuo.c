#include <stdio.h>

int main(void)
{
    int num;
    double c;
    int l_num[100];
    double l_c[100];
    int i = 0;
    scanf("%d", &num);

    while (num != 0)
    {
        scanf("%lf", &c);
        l_num[i] = num;
        l_c[i] = c;
        i++; 
        scanf("%d", &num);
    }

    printf("The records are:\n");

    for (int j = 0; j < i; j++)
    {
        printf("%d %.1lf\n", l_num[j], l_c[j]);
    }

    scanf("%lf", &c);
    while (c != 0)
    {
        printf("The records are:\n");
        for (int j = 0; j < i; j++)
        {
            if (l_c[j] >= c && l_c[j] > 60)
            {
                printf("%d %.1lf\n", l_num[j], l_c[j]);
            }
        }
        scanf("%lf", &c);
    }

    return 0;
}