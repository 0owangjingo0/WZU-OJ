#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        double lst[10] = 
        {
            28.9, 
            32.7,
            45.6,
            78,
            35,
            86.2,
            27.8,
            43,
            56,
            65
        };

        double s = 0;
        for (int i = 0; i < 10; i++)
        {
            int temp;
            scanf("%d", &temp);
            s += lst[i] * temp;
        }

        printf("%.2lf\n", s);
    }
    
    return 0;
}