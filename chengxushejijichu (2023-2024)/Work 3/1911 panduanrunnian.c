#include <stdio.h>
#include <math.h>

int main(void)
{   
    int year;
    int flag = 0;

    scanf("%d", &year);

    if (
        (year % 4 == 0)
        &&
        (year % 100 != 0)
    )
    {
        flag = 1;
    }
    else if (year % 400 == 0)
    {
        flag = 1;
    }

    flag ? printf("Y\n") : printf("N\n");

    return 0;
}