#include <stdio.h>

int main(void)
{
    int a, b;
    int lst[100][100];
    int ad[100][100] = {0};

    scanf("%d %d", &a, &b);

    for (int i=0; i < a; i++)
    {
        int h_max = 0;
        int m_i = -1;
        int m_j = -1;
        for (int j=0; j < b; j++)
        {
            scanf("%d", &lst[i][j]);
            if (lst[i][j] > h_max)
            {
                h_max = lst[i][j];
                m_i = i;
                m_j = j;
            }
        }
        ad[m_i][m_j] += 1;
    }
    for (int j=0; j < b; j++)
    {
        int l_min = 100;
        int m_i = -1;
        int m_j = -1;
        for (int i=0; i < a; i++)
        {
            if (lst[i][j] < l_min)
            {
                l_min = lst[i][j];
                m_i = i;
                m_j = j;
            }
        }
        ad[m_i][m_j] += 1;        
    }

    int flag = 0;
    for (int i=0; i < a; i++)
    {
        for (int j=0; j < b; j++)
        {
            if (ad[i][j] == 2)
            {
                printf("%d %d %d \n", i, j, lst[i][j]);
                flag = 1;
            }
        }
    }

    if (!flag)
    {
        printf("N\n");
    }

    return 0;

}