#include <stdio.h>

int main(void)
{
    int lst[3];
    int temp;

    scanf("%d %d %d", &lst[0], &lst[1], &lst[2]);
    
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2-i; j++)
        {
            if (lst[j] > lst[j+1])
            {
                temp = lst[j+1];
                lst[j+1] = lst[j];
                lst[j] = temp;
            }
        }
    }

    printf("%d %d %d\n", lst[0], lst[1], lst[2]);

    return 0;
}