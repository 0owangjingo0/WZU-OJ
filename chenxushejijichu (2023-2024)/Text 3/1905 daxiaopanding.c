#include <stdio.h>
#include <math.h>

int main(void)
{   
    int a, b;
    scanf("%d %d", &a, &b);

    if (a == b)
    {
        printf("=\n");
    }
    else
    {
        (a > b) ? printf(">\n") : printf("<\n");
    }

    return 0;
}