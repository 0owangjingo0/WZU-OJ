#include <stdio.h>
#include <math.h>

int is_sushu(int a);

int main(void)
{
    int a;
    int s = 0;

    scanf("%d", &a);

    while (a != 0)
    {
        for (int i=2; i < a/2; i++)
        {
        if ((is_sushu(i)) && (is_sushu(a-i)))
            {   
                s++;
            }
        }
        printf("%d\n", s);
        s = 0;
        scanf("%d", &a);
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