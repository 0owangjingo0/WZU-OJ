#include <stdio.h>

int main(void)
{
    int lst[10];

    scanf(
        "%d %d %d %d %d %d",
        &lst[0],
        &lst[1],
        &lst[2],
        &lst[3],
        &lst[4],
        &lst[5]
        );
    
    while (lst[0]+lst[1]+lst[2]+lst[3]+lst[4]+lst[5] != 0)
    {
        int i = 6;

        for (; i > 0; i--)
        {
            int j;
            for (j=0; j < 5; j++)
            {
                printf("%d ", lst[(i+j)%6]);
            }
            printf("%d\n", lst[(i+j)%6]);
        }
        
        scanf(
        "%d %d %d %d %d %d",
        &lst[0],
        &lst[1],
        &lst[2],
        &lst[3],
        &lst[4],
        &lst[5]
        );
    }

    return 0;
}