#include<stdio.h>

int jiecheng(int n);
void combinations(int arr[], int p, int start, int current[], int curLen, int * flag);

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n != -1)
    {
        int lst[1000] = {0};
        int p = 0;

        for (int i = 0; i < n; i++)
        {
            int temp = jiecheng(i);
            if (temp <= n)
            {
                lst[p++] = temp;
            }
            else
            {
                break;
            }
        }

        int i = 1;
        int flag = 0;
        int current[1000] = {0};
        combinations(lst, p, 0, current, 0, &flag);
        if (flag == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

        scanf("%d", &n);
    }
    return 0;    
}

void combinations(int arr[], int p, int start, int current[], int curLen, int * flag)
{
    if (*flag == 1)
    {
        return;
    }
    int s = 0;
    for (int i = 0; i < curLen; i++)
    {
        s += current[i];
    }
    if (s == p)
    {
        *flag = 1;
        return;
    }

    if (curLen == p)
    {
        return;
    }
    for (int i = start; i < p; i++)
    {
        current[curLen] = arr[i];
        combinations(arr, p, i + 1, current, curLen + 1, flag);
    }
}

int jiecheng(int n)
{
    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        s *= i;
    }
    return s;
}