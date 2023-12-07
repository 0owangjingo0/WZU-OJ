#include <stdio.h>

unsigned short rotate_left(unsigned short x, int n) 
{
    return (x << n) | (x >> (16 - n));
}

int can_rotate_to(unsigned short x, unsigned short y) 
{
    for (int i = 0; i < 16; i++) 
    {
        if (rotate_left(x, i) == y) 
        {
            return 1;
        }
    }
    return 0;
}

int main() 
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        unsigned short x, y;
        scanf("%hu %hu", &x, &y);

        if (can_rotate_to(x, y)) 
        {
            printf("YES\n");
        } 
        else 
        {
            printf("NO\n");
        }
    }

    return 0;
}