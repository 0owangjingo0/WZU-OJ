#include <stdio.h>

void pD_to_O(int a);

int main(void)
{
    int a;

    while (scanf("%d", &a) != EOF)
    {
        pD_to_O(a);
        putchar('\n');
    }
}

void pD_to_O(int a)
{
    if (a / 2 != 0)
    {
        pD_to_O(a / 2);
    }

    printf("%d", a % 2);
}