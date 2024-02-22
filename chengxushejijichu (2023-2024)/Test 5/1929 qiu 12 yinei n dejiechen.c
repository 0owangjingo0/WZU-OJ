#include <stdio.h>

int main()
{    
    int n;
    int m = 1;
    
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i++)
    {
        m *= i;
    }    
    printf("%d\n", m);
    return 0;
}