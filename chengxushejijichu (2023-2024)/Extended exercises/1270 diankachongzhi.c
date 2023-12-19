#include <stdio.h>

int main()
{
    int N;
    while (scanf("%d", &N) != EOF)
    {
        int count = 0;
        for (int i = 1; N > 0; i *= 2)
        {
            if (N >= i)
            {
                N -= i;
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}