#include <stdio.h>

int main(void)
{
    int a;
    int n;

    while (scanf("%d", &n) != EOF)
    { 
        int s = 0;
        while (n-- >= 1)
        {
            scanf("%d", &a);
            s += a;
        }
        printf("%d\n", s);
    }

    return 0;
}