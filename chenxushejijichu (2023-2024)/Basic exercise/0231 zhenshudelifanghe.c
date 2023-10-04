#include <stdio.h>
#include <math.h>

int main()
{    
    int a;
    int s = 0;
    scanf("%d", &a);

    for (int i=1; i <= a; i++)
    {
        s += pow(i, 3);
    }

    printf("%d\n", s);
    return 0;
}