#include <stdio.h>

void charupaixu(int lst[], int index[], int p);
double avr_time(int lst[], int p);

int main(void)
{
    int n, m;

    scanf("%d", &n);

    while (n >= 1)
    {
        int lst[1000];
        int index[1000];
        int p = 0;
        scanf("%d", &m);
        
        while(m >= 1)
        {
            scanf("%d", &lst[p]);
            index[p] = p+1;
            p++;

            m--;
        }
        charupaixu(lst, index, p);
        
        int i;
        for (i=0; i<p-1; i++)
        {
            printf("%d ", index[i]);
        }
        printf("%d\n", index[i]);
        printf("%.2lf\n", avr_time(lst, p));

        n--;
    }

    return 0;
}

void charupaixu(int lst[], int index[], int p)
{
    int t;
    int q;

    for (int i=1; i <= p-1; i++)
    {
        t = lst[i];
        q = index[i];
        
        int j = i - 1;
        while (j >= 0)
        {
            if (t < lst[j])
            {
                lst[j+1] = lst[j];
                index[j+1] = index[j];
            }
            else
            {
                break;
            }

            j--;
        }
        lst[j+1] = t;
        index[j+1] = q;
    }
}

double avr_time(int lst[], int p)
{
    double s;

    for (int i=0; i <= p-1; i++)
    {
        for (int j=0; j < i; j++)
        {
            s += lst[j];
        }

    }

    return s/p;
}