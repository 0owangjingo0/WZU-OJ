#include <stdio.h>
#include <math.h>

int main(void)
{   
    int n;
    int s;

    scanf("%d", &n);
    s = pow(n/100, 3) + pow(n%100/10, 3) + pow(n%10, 3);

    (s == n) ? printf("Yes\n") : printf("No\n");


    return 0;
}