#include <stdio.h>

void bobble_sort(int lst[], int p);

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n-- >= 1)
    {
        int m;
        scanf("%d", &m);

        int lst[200];
        int p = 0;

        while (m-- >= 1)
        {
            scanf("%d", &lst[p]);
            p++;
        }

        bobble_sort(lst, p);

        printf("%d\n", lst[0]);
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