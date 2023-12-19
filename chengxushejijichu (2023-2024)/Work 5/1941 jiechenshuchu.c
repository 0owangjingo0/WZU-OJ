#include <stdio.h>

int main()
{    
    int a, b;
    int s;
    
    scanf("%d %d", &a, &b);
    
    for (; a < b; a++)
    {
        printf("%d!+", a);
    }    
    printf("%d!\n", a);
    
    return 0;
}