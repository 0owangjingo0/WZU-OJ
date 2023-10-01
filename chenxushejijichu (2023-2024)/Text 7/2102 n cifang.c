#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%.0lf\n", pow(a, b));

    return 0;
}