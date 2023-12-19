#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int a;
        scanf("%d", &a);

        int sum = 3;
        for (int i = 0; i < a; i++)
        {
            sum = 2 * (sum - 1);
        }
        printf("%d\n", sum);
    }

    return 0;
}