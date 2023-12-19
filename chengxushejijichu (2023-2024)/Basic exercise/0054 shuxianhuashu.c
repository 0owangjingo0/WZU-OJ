#include <stdio.h>
#include <math.h>

int fun(int a);

int main()
{    
    int n;
    int a, b;
    int lst[10];

    while (scanf("%d %d", &a, &b) != EOF)
    {
        int flag = 0;
        int m = 0;
        
        for (int j=a; j <= b; j++)
        {
            if (fun(j))
            {
                lst[m] = j;
                m++;
                flag = 1;
            }
        }

        if (!flag)
        {
            printf("no\n");
        }
        else
        {
            for (int j=0; j<m-1; j++)
            {
                printf("%d ", lst[j]);
            }
            printf("%d\n", lst[m-1]);
        }
    }

    return 0;
}

int fun(int a)
{
    int b;
    
    b = pow(a/100, 3) + pow(a%100/10, 3) + pow(a%10, 3);
    
    if (a == b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}