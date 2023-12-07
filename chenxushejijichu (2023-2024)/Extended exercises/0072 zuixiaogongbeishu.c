#include <stdio.h>

int beishu(int a, int b);

int main(void)
{
    int n;
    while (scanf("%d", &n) != EOF)
    {     
        int ans = -1;
        int a, b;
        scanf("%d %d", &a, &b);
        ans = beishu(a, b);
        n -= 2;

        while (n--)
        {
            int temp;
            scanf("%d", &temp);
            ans = beishu(ans, temp);
        }

        printf("%d\n", ans);
    }
}

int beishu(int a, int b)
{
    int max = (a > b) ? a : b;
	while (1)
	{
		if (
            (max % a == 0)
            &&
            (max % b == 0)
            )
            {
                return max; 
            }
		max++;
	}
}