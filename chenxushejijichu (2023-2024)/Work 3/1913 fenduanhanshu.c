#include <stdio.h>

int main(void)
{   
    double x, y;

    scanf("%lf", &x);

    if (
        (-5 <= x)
        &&
        (x < 0)        
    )
    {
        y = 8/(x*x+x+1);
        printf("%.3lf\n", y);
    }
    else if (
        (0 <= x)
        &&
        (x < 5)
    )
    {
        y = 7/(x*x+x+1);
        printf("%.3lf\n", y);
    }
    else if (
        (5 <= x)
        &&
        (x < 10)
    )
    {
        y = 2/(x+8);
        printf("%.3lf\n", y);
    }
    else
    {
        printf("%.3lf\n", 0);
    }
    
    return 0;
}