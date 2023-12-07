#include <stdio.h>

int main(void)
{
    int lst[20][2] = {0};

    lst[0][0] = 1;
    lst[0][1] = 0;

    int n;
    scanf("%d", &n);
    while (n != -1)
    {
        for (int i = 1; i <= n; i++)
        {
            lst[i][0] = lst[i - 1][0] * 3 + lst[i - 1][1] * 2;
            lst[i][1] = lst[i - 1][0] + lst[i - 1][1];
        }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
        printf("%d, %d\n", lst[n][0], lst[n][1]);

        scanf("%d", &n);
    }
    
}