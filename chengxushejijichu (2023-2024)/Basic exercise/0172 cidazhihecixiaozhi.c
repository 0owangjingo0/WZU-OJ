#include <stdio.h>

void bobble_sort(int lst[], int p);

int main(void)
{
    int m;
    scanf("%d", &m);

    while (m-- >= 1)
    {
        int n;
        int lst[100];
        int p = 0;

        scanf("%d", &n);

        while (n-- >= 1)
        {
            scanf("%d", &lst[p]);
            p++;
        }
        bobble_sort(lst, p);

        printf("%d\n", lst[p-2] - lst[1]);
        if (m >= 1)
        {
            putchar('\n');
        }

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
            if (lst[j] > lst[j+1])
            {
                temp = lst[j+1];
                lst[j+1] = lst[j];
                lst[j] = temp;
            }
        }
    }
}