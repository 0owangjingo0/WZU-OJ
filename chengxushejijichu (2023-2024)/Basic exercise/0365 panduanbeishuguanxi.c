#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n-- >= 1)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        
        if (a==0)
        {
            printf("1\n");
        }
        else if (b==0)
        {
            printf("0\n");
        }
        else
        {
            (a % b == 0) ? printf("1\n") : printf("0\n");
        }
    }

    return 0;
}