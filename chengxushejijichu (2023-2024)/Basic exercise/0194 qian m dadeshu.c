#include <stdio.h>

void bobble_sort(int lst[], int p);

int main()
{    
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF)
    {
        int lst[100];
        int p = 0;

        int s[100];
        int q = 0;
        
        while (a-- >= 1)
        {
            scanf("%d", &lst[p]);
            p++;
        }

        for (int i=0; i < p; i++)
        {
            for (int j=i+1; j < p; j++)
            {
                s[q] = lst[i] + lst[j];
                q++;
            }
        }

        bobble_sort(s, q);
        for (int i=0; i < b; i++)
        {
            printf("%d ", s[i]);
        }
        putchar('\n');
    }

    return 0;
}

void bobble_sort(int lst[], int p)
{
    int temp;

    for (int i=0; i<p; i++)
    {
        for (int j=0; j<p-i-1; j++)
        {
            if (lst[j] < lst[j+1])
            {
                temp = lst[j+1];
                lst[j+1] = lst[j];
                lst[j] = temp;
            }
        }
    }
}