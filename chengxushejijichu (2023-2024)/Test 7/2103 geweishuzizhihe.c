#include <stdio.h>

int main()
{
    int a;
    int s = 0;
    int z,y;

    scanf("%d", &a);

    z = a/10;
    y = a%10;

    while (z != 0)
    {
        s += y;
        y = z%10;
        z = z/10;
    }
    s += y;

    printf("%d\n", s);

    return 0;
}