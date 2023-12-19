#include <stdio.h>

int main(void)
{   
    int a;

    scanf("%d", &a);
    
    if (a == 0)
    {
        printf("0\n");
    }
    else
    {
        (a > 0) ? printf("1\n") : printf("-1\n");
    }


    return 0;
}