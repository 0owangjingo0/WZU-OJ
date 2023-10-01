#include <stdio.h>

void sort(int n);

int lst[3];

int main(void)
{   
    scanf("%d %d %d", &lst[0], &lst[1], &lst[2]);
    
    if (
        (lst[0] + lst[1] > lst[2])
        &&
        (lst[2] - lst[1] < lst[0])
        )
        {
            printf("YES\n");
        }
    else
    {
        printf("NO\n");
    }

    return 0;
}

void sort(int n)
{
    int temp;

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
}