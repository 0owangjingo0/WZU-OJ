#include <stdio.h>
#include <math.h>

int is_sushu(int a);

int main(void)
{
    int n;
    int a;

    scanf("%d", &n);

    while (n >= 1)
    {
        scanf("%d", &a);
        (is_sushu(a)) ? printf("yes\n") : printf("no\n");
        n--;
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