#include <stdio.h>
#include <math.h>

int fun(int a);

int main()
{    
    int i;
    
    for (i=100; i < 1000; i++)
    {
        if (fun(i))
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}

int fun(int a)
{
    int b;
    
    b = pow(a/100, 3) + pow(a%100/10, 3) + pow(a%10, 3);
    
    if (a == b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}