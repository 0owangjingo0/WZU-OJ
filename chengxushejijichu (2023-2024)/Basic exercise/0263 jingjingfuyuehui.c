#include <stdio.h>

int main(void)
{
    int d;
    scanf("%d", &d);

    if (
        d != 1 &&
        d != 3 &&
        d != 5
    )
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}