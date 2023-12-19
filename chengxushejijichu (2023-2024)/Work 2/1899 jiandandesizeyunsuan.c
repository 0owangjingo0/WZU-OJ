#include <stdio.h>

int main(void)
{
    int a, b;
    int c, d, e, f;

    scanf("%d %d", &a, &b);
    c = a + b;
    d = a * b;
    e = a - b;
    f = a / b;
    printf("%d %d %d %d\n", c, d, e, f);

    return 0;
}