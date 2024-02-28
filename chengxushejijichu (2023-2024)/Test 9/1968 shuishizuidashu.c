#include <stdio.h>

int maopaopaixu(int lst[], int p);

int main(void)
{
    int m, n;

    scanf("%d", &m);
    
    while (m >= 1)
    {
        scanf("%d", &n);
        int lst[1000];
        int p = 0;

        while (n >= 1)
        {
            scanf("%d", &lst[p]);
            p++;

            n--;
        }

        printf("%d\n", maopaopaixu(lst, p));

        m--;
    }
}

int maopaopaixu(int lst[], int p)
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

    return lst[p-1];
}