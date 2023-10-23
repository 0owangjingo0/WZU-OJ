#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[100000][2];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d %d", &a[i * m + j][0], &a[i * m + j][1]);
        }
    }

    int b;
    scanf("%d", &b);
    int num = a[b][1];
    int key = num;
    int j = b;

    for (int i = 0; i < n - 1; i++)
    {

        while (num)
        {
            if (a[i * m + j % m][0] == 1)
            {
                num--;
            }
            j++;
        }
        j--;
        num = a[(i+1) * m + j % m][1];
        key += num;
    }

    printf("%d", key % 20123);
    return 0;
    }