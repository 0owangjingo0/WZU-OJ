#include <stdio.h>
#include <string.h>

int is_same(char (*p1)[10], char(*p2)[10]);

int main(void)
{
    int n;
    char str_arr[10][10] = {{0, 0}};
    char std_str_arr[10][10] = {{0, 0}};
    char new_str_arr[10][10] = {{0, 0}};

    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            str_arr[i][j] = getchar();
        }
        getchar();
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std_str_arr[i][j] = getchar();
        }
        getchar();
    }

    // 1. 转90度
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            new_str_arr[i][j] = str_arr[n - j - 1][i];
        }
    }
    if (is_same(new_str_arr, std_str_arr))
    {
        printf("1\n");
        return 0;
    }

    // 2. 转180度
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            new_str_arr[i][j] = str_arr[n - i - 1][n - j - 1];
        }
    }
    if (is_same(new_str_arr, std_str_arr))
    {
        printf("2\n");
        return 0;
    }

    // 3. 转270度
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            new_str_arr[i][j] = str_arr[j][n - i - 1];
        }
    }
    if (is_same(new_str_arr, std_str_arr))
    {
        printf("3\n");
        return 0;
    }

    // 4. 反射
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            new_str_arr[i][j] = str_arr[i][n - j - 1];
        }
    }
    if (is_same(new_str_arr, std_str_arr))
    {
        printf("4\n");
        return 0;
    }

    // 5. 组合
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            new_str_arr[i][j] = str_arr[i][n - j - 1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            str_arr[i][j] = new_str_arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            new_str_arr[i][j] = str_arr[n - j - 1][i];
        }
    }
    if (is_same(new_str_arr, std_str_arr))
    {
        printf("5\n");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            new_str_arr[i][j] = str_arr[n - i - 1][n - j - 1];
        }
    }
    if (is_same(new_str_arr, std_str_arr))
    {
        printf("5\n");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            new_str_arr[i][j] = str_arr[j][n - i - 1];
        }
    }
    if (is_same(new_str_arr, std_str_arr))
    {
        printf("5\n");
        return 0;
    }

    // 6. 不改变
    if (is_same(str_arr, std_str_arr))
    {
        printf("6\n");
        return 0;
    }

    // 7. 无效转换
    printf("7\n");
    return 0;
}

int is_same(char (*p1)[10], char(*p2)[10])
{
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(p1[i], p2[i]) != 0)
        {
            return 0;
        }
    }
    return 1;
}