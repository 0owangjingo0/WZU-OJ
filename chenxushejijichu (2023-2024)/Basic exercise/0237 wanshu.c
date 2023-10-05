#include <stdio.h>
#include <math.h>

void wanshu(int a);

int main(void)
{
    for (int i=2; i <= 1000; i++)
    {
        wanshu(i);
    }
}

void wanshu(int a)
{
    int lst[1000];
    int p = 0;
    int s = 0;

    for (int i=1; i < a; i++)
    {
        if (a%i == 0)
        {
            s += i;
            lst[p] = i;
            p++;
        }
    }
    if (s == a)
    {
        printf("%d its factors are ", a);

        for (int i=0; i < p; i++)
        {
            printf("%d ", lst[i]);
        }
        putchar('\n');
    }

}