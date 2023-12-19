#include <stdio.h>

int tripow(int n);

int main(void)
{
    int n;
    scanf("%d", &n);

    int ans[300][4] = {0};
    int p = 0;

    for (int i = 6; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            for (int k = 2; k < j; k++)
            {
                for (int l = 2; l < k; l++)
                {
                    if (tripow(i) == tripow(j) + tripow(k) + tripow(l))
                    {
                        ans[p][0] = i;
                        ans[p][1] = l;
                        ans[p][2] = k;
                        ans[p][3] = j;
                        p++;
                    }
                }
            }
        }
    }

    //按照i升序，当i相同时按照j升序，当i和j相同时按照k升序，当i、j和k相同时按照l升序(从小到大)
    for (int i = 0; i < p; i++)
    {
        for (int j = i + 1; j < p; j++)
        {
            if (ans[i][0] > ans[j][0])
            {
                int temp[4] = {0};
                for (int k = 0; k < 4; k++)
                {
                    temp[k] = ans[i][k];
                    ans[i][k] = ans[j][k];
                    ans[j][k] = temp[k];
                }
            }
            else if (ans[i][0] == ans[j][0])
            {
                if (ans[i][1] > ans[j][1])
                {
                    int temp[4] = {0};
                    for (int k = 0; k < 4; k++)
                    {
                        temp[k] = ans[i][k];
                        ans[i][k] = ans[j][k];
                        ans[j][k] = temp[k];
                    }
                }
                else if (ans[i][1] == ans[j][1])
                {
                    if (ans[i][2] > ans[j][2])
                    {
                        int temp[4] = {0};
                        for (int k = 0; k < 4; k++)
                        {
                            temp[k] = ans[i][k];
                            ans[i][k] = ans[j][k];
                            ans[j][k] = temp[k];
                        }
                    }
                    else if (ans[i][2] == ans[j][2])
                    {
                        if (ans[i][3] > ans[j][3])
                        {
                            int temp[4] = {0};
                            for (int k = 0; k < 4; k++)
                            {
                                temp[k] = ans[i][k];
                                ans[i][k] = ans[j][k];
                                ans[j][k] = temp[k];
                            }
                        }
                    }
                }
            }
        }
    }


    //输出

    for (int i = 0; i < p; i++)
    {
        printf("Cube = %d, Triple = (%d,%d,%d)\n", ans[i][0], ans[i][1], ans[i][2], ans[i][3]);
    }
    return 0;
}

int tripow(int n)
{
    return n * n * n;
}