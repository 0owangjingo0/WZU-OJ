#include <stdio.h>

void bobble_sort(int lst[], int p);

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n-- >= 1)
    {
        int lst[5];
        int s = 0;
        int c = 1;

        scanf("%d %d %d", &lst[0], &lst[1], &lst[2]);
        bobble_sort(lst, 3);

        for (int i=0; i < 3; i++)
        {
            s += lst[i];
            c *= lst[i];
        }

        printf("%d %d %d %d %d\n", s, s/3, c, lst[0], lst[2]);

    }

    return 0;
}

void bobble_sort(int lst[], int p)
{
    int temp;

    for (int i=0; i<p; i++)
    {
        for (int j=0; j<p-i; j++)
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