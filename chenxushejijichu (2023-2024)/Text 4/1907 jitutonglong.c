#include <stdio.h>

int main(void)
{   
    int a;
    int min = 0, max = 0;

    scanf("%d", &a);
    if (
        (a >= 2)
        &&
        (a % 2 == 0)
    )
    {
        min = a/4 + a%4/2;
        max = a/2;
    }
    
    printf("%d %d\n", min, max);


    return 0;
}