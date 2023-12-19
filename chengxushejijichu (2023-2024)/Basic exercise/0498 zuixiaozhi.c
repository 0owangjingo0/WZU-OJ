#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int min;
    int min_i = 0;
    scanf("%d", &min);

    int a;
    int i = 0;

    while (n-- >= 2)
    {
        scanf("%d", &a);
        i++;
        if (a < min)
        {
            min = a;
            min_i = i;
        }
    }

    printf("%d %d\n", min, min_i);
}