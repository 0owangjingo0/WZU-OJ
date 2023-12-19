#include <stdio.h>

int main(void)
{
    int m, n;
    scanf("%d%d", &m, &n);
    getchar();

    while (m != 0 && n != 0)
    {
        char str1[100][100];
        char str2[100][100];

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%c", &str1[i][j]);
            }
            getchar();
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int count = 0;
                
                //从str1中找寻i,j位置上下左右斜八个方向的地雷数
                //如果是地雷，count++
                //如果当前位置不是地雷，将count转换为字符，存入str2中
                //如果当前位置是地雷，将*存入str2中

                if (str1[i][j] == '*')
                {
                    str2[i][j] = '*';
                }
                else
                {
                    int ti = i - 1;
                    int tj = j - 1;
                    if (ti >= 0 && tj >= 0 && str1[ti][tj] == '*')
                    {
                        count++;
                    }
                    ti = i - 1;
                    tj = j;
                    if (ti >= 0 && str1[ti][tj] == '*')
                    {
                        count++;
                    }
                    ti = i - 1;
                    tj = j + 1;
                    if (ti >= 0 && tj < n && str1[ti][tj] == '*')
                    {
                        count++;
                    }
                    ti = i;
                    tj = j - 1;
                    if (tj >= 0 && str1[ti][tj] == '*')
                    {
                        count++;
                    }
                    ti = i;
                    tj = j + 1;
                    if (tj < n && str1[ti][tj] == '*')
                    {
                        count++;
                    }
                    ti = i + 1;
                    tj = j - 1;
                    if (ti < m && tj >= 0 && str1[ti][tj] == '*')
                    {
                        count++;
                    }
                    ti = i + 1;
                    tj = j;
                    if (ti < m && str1[ti][tj] == '*')
                    {
                        count++;
                    }
                    ti = i + 1;
                    tj = j + 1;
                    if (ti < m && tj < n && str1[ti][tj] == '*')
                    {
                        count++;
                    }
                    str2[i][j] = count + '0';
                }
            }

        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++) 
            {
                printf("%c", str2[i][j]);
            }
            putchar('\n');
        }
        putchar('\n');
        scanf("%d%d", &m, &n);
        getchar();
    }

    return 0;    
}