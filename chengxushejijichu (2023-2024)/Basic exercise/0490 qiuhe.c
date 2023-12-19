#include <stdio.h>

int main()
{
    int s;

    for (int i=1; i <= 100; i++)
    {
        s += i; 
    }

    printf("%d\n", s);

    return 0;
}