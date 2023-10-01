#include <stdio.h>
#include <math.h>

void maopaopaixu(int lst[], int p);

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n != 0)
    {
        int lst[100];
        int p = 0;

        while (n-- >= 1)
        {
            scanf("%d", &lst[p]);
            p++;
        }

        maopaopaixu(lst, p);
        scanf("%d", &n);
    }
    
}

void maopaopaixu(int lst[], int p)
{
    int temp;

    for (int i=0; i<p; i++)
    {
        for (int j=0; j<p-1-i; j++)
        {
            if (fabs(lst[j]) < fabs(lst[j+1]))
            {
                temp = lst[j+1];
                lst[j+1] = lst[j];
                lst[j] = temp;
            }
        }
    }

    int i;
    for (i=0; i < p-1; i++)
    {
        printf("%d ", lst[i]);
    }
    printf("%d\n", lst[i]);
}