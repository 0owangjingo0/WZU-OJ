#include <stdio.h>

void sizeyunsuan(int a, int b);

int main()
{
    int n;
    int a, b;

    scanf("%d", &n);

    for (int i=1; i <= n; i++)
    {
        scanf("%d %d", &a, &b);
        sizeyunsuan(a, b);
    }

    return 0;
}

void sizeyunsuan(int a, int b)
{
    printf("%d %d %d %d\n", a+b, a*b, a-b, a/b);
}