#include <stdio.h>

int main()
{    
    int n;
    double s = 0;
    
    scanf("%d", &n);
    
    for (int i=1; i <n+1; i++)
    {
        s += 1.0/i;
    }
    
    printf("%.3lf\n", s);
    
    return 0;
}