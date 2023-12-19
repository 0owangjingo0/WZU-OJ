#include <stdio.h>

int main(void)
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int count = 2;
        int sum = 0;
        int day = 0;

        while (count <= n)
        {
            day++;
            sum += count;
            count *= 2;
        }
        printf("%.1lf\n", sum * 0.8 / day);
    }
    
    return 0;
}