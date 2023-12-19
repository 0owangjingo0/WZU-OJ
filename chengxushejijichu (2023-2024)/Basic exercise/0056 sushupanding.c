#include <stdio.h>
#include <math.h>

int is_sushu(int a);
int fun(int x, int y);

int main()
{    
    int n;
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        if (!((a == 0) && (b == 0)))
        {
            (fun(a, b)) ? printf("OK\n") : printf("Sorry\n");
        }
    }

    return 0;
}

int is_sushu(int a)
{
    if (a == 2)
    {
        return 1;
    }
    
    for (int i=2; i <= sqrt(a)+1; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int fun(int x, int y)
{
    for (int n = x; n <= y; n++)
    {
        if (!is_sushu(pow(n, 2) + n + 41))
        {
            return 0;
        }
    }

    return 1;
    
}