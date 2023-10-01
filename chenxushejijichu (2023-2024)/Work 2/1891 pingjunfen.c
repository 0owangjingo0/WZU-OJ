#include <stdio.h>

int main(void)
{
    int a, b, c;
    int s = 0;

    scanf("%d %d %d", &a, &b, &c);
    s = a + b + c;
    printf("%.1lf\n", (double)s/3);

    return 0;
}