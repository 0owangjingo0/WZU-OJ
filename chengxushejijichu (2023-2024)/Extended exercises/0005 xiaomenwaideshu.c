#include <stdio.h>

int main(void)
{
    short int num1[10001] = {0};

    int l, m;
    scanf("%d %d", &l, &m);

    while(m--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        for (int i = a; i <= b; i++)
        {
            num1[i] = 1;
        }
    }

    int count = 0;
    for (int i = 0; i <= l; i++)
    {
        if (num1[i] == 0)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}