#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int num[3] = {0};

    while (n--)
    {
        int temp;
        scanf("%d", &temp);

        if (temp == 1)
        {
            num[0] += 1;
        }
        else if (temp == 5)
        {
            num[1] += 1;
        }
        else if (temp == 10)
        {
            num[2] += 1;
        }
    }

    printf("%d\n%d\n%d\n", num[0], num[1], num[2]);

    return 0;
}