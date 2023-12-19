#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int a1 = a / 2;
    int b1 = b / 2;

    while (a1 != b1)
    {
        if (a1 > b1)
        {
            a1 = a1 / 2;
        }
        else
        {
            b1 = b1 / 2;
        }
    }

    printf("%d\n", a1);

}