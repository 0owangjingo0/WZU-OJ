#include <stdio.h>

void sort(int n);

int lst[3];

int main(void)
{   
    int a, b, c;

    scanf("%d %d %d", &lst[0], &lst[1], &lst[2]);
    a = lst[0] + lst[1] + lst[2];
    b = a/3;
    c = lst[0] * lst[1] * lst[2];
    sort(3);
    printf("%d %d %d %d %d\n", a, b, c, lst[0], lst[2]);   

    return 0;
}

void sort(int n)
{
    int temp;

    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2-i; j++)
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