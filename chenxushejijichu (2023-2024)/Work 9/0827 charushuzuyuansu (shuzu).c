#include <stdio.h>

void maopaopaixu(int lst[], int p);

int main(void)
{
    int m, n;

    scanf("%d %d", &m, &n);

    while (m * n != 0)
    {
        int lst[1000];
        int p = 0;
        lst[p] = n;
        p++;
        
        while (m >= 1)
        {
            scanf("%d", &lst[p]);
            p++;
            m--;
        }
        maopaopaixu(lst, p);
        putchar('\n');
        scanf("%d %d", &m, &n);
    }
    
}

void maopaopaixu(int lst[], int p)
{
    int temp;

    for (int i=0; i<p; i++)
    {
        for (int j=0; j<p-1-i; j++)
        {
            if (lst[j] > lst[j+1])
            {
                temp = lst[j+1];
                lst[j+1] = lst[j];
                lst[j] = temp;
            }
        }
    }

    for (int i=0; i < p; i++)
    {
        printf("%d ", lst[i]);
    }
}