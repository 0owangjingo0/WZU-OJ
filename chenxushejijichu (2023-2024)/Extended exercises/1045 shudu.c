#include <stdio.h>

int main(void)
{
    //freopen("in1.txt", "r", stdin);
    int n;
    scanf("%d", &n);

    while (n--)
    {
        getchar();
        int lst[9][9];
        int fflag = 1;

        for (int i = 0; i < 9; i++)
        {
            int flag[9] = {0};
            for (int j = 0; j < 9; j++)
            {
                char ch;
                scanf("%c", &ch);
                lst[i][j] = ch - '0';
                if (flag[lst[i][j] - 1] == 1)
                {
                    fflag = 0;
                }
                else
                {
                    flag[lst[i][j] - 1] = 1;
                }
            }
            getchar();
        }

        if (fflag == 0)
        {
            printf("no\n");
            continue;
        }

        for (int i = 0; i < 9; i++)
        {
            int flag[9] = {0};
            for (int j = 0; j < 9; j++)
            {
                if (flag[lst[j][i] - 1] == 1)
                {
                    fflag = 0;
                    break;
                }
                else
                {
                    flag[lst[j][i] - 1] = 1;
                }
            }
        }

        if (fflag == 0)
        {
            printf("no\n");
            continue;
        }

        for (int i = 0; i < 9; i += 3)
        {
            for (int j = 0; j < 9; j += 3)
            {
                int flag[9] = {0};
                for (int k = i; k < i + 3; k++)
                {
                    for (int l = j; l < j + 3; l++)
                    {
                        if (flag[lst[k][l] - 1] == 1)
                        {
                            fflag = 0;
                            break;
                        }
                        else
                        {
                            flag[lst[k][l] - 1] = 1;
                        }
                    }
                }
            }
        }

        if (fflag == 0)
        {
            printf("no\n");
            continue;
        }

        printf("yes\n");
    }

    return 0;
}