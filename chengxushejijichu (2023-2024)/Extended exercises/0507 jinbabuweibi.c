#include <stdio.h>

int char_to_int(char ch);
int arr_sum(int *num1, int *num2, int *sum, int p1, int p2, int p3);
void print_sum(int *sum, int p3);
int main(void)
{
    int num1[200] = {0};
    int num2[200] = {0};
    int p1 = 0;
    int p2 = 0;

    char ch;
    int flag = 1;
    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ')
        {
            flag = 0;
            continue;
        }
        if (ch == '\n')
        {
            int sum[200] = {0};
            int p3 = 0;
            p3 = arr_sum(num1, num2, sum, p1, p2, p3);
            print_sum(sum, p3);
            flag = 1;
            p1 = 0;
            p2 = 0;
            continue;
        }
        if (flag)
        {
            num1[p1++] = char_to_int(ch);
        }
        else
        {
            num2[p2++] = char_to_int(ch);
        }

    }
    
}

int char_to_int(char ch)
{
    return ch - '0';
}

int arr_sum(int *num1, int *num2, int *sum, int p1, int p2, int p3)
{
    p1--;
    p2--;
    p3 = p1 > p2 ? p1 : p2;
    p3++;
    int p3_copy = p3;
    
    while (p1 != -1 && p2 != -1)
    {
        sum[p3] += num1[p1--] + num2[p2--];
        if (sum[p3] > 9)
        {
            sum[p3] -= 10;
            sum[p3 - 1] += 1;
        }
        p3--;
    }
    while (p1 != -1)
    {
        sum[p3] += num1[p1--];
        if (sum[p3] > 9)
        {
            sum[p3] -= 10;
            sum[p3 - 1] += 1;
        }
        p3--;
    }
    while (p2 != -1)
    {
        sum[p3] += num2[p2--];
        if (sum[p3] > 9)
        {
            sum[p3] -= 10;
            sum[p3 - 1] += 1;
        }
        p3--;
    }

    return p3_copy;
}

void print_sum(int *sum, int p3)
{
    if (sum[0] != 0)
    {
        printf("%d", sum[0]);
    }
    for (int i = 1; i <= p3; i++)
    {
        printf("%d", sum[i]);
    }
    putchar('\n');
}