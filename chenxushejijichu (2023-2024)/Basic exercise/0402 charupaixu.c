#include <stdio.h>

void charupaixu(int lst[], int p);

int main(void)
{
    int n, m;

    scanf("%d", &n);

    while (n >= 1)
    {
        int lst[100];
        int p = 0;
        scanf("%d", &m);
        
        while(m >= 1)
        {
            scanf("%d", &lst[p]);
            p++;

            m--;
        }
        charupaixu(lst, p);
        
        int i;
        for (i=0; i<p-1; i++)
        {
            printf("%d ", lst[i]);
        }
        printf("%d\n", lst[i]);

        n--;
    }

    return 0;
}

void charupaixu(int lst[], int p)
{
    int t;

    for (int i=1; i <= p-1; i++)
    {
        t = lst[i];
        int flag = 0;
        
        int j = i - 1;
        while (j >= 0)
        {
            if (t < lst[j])
            {
                lst[j+1] = lst[j];
            }
            else
            {
                break;
            }

            j--;
        }
        lst[j+1] = t;
    }
}