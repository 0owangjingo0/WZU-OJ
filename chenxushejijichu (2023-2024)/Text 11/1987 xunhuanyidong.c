#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[1000];
    int i = 500;
    int j = 500;

    while (n--)
    {
        scanf("%d", &a[j]);
        j--;
    }
    j++;
    while (m--)
    {
        i++;
        a[i] = a[j];
        j++;
    }

    int k;
    for (k = i; k > j; k--)
    {
        printf("%d ", a[k]);
    }
    printf("%d", a[k]);
    putchar('\n');

    return 0;
}