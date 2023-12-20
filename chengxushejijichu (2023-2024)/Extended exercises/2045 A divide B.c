#include <stdio.h>
#include <string.h>

int check(int a[], int d[], int len_a, int len_d)
{
	if (len_a < len_d)
    {
        return 0;
    }
		
	for (int i = len_a; i > 0; i--)
    {
        if (a[i] > d[i])
        {
            return 1;
        }
        else if (a[i] < d[i])
        {
            return 0;
        }
    }
		
	return 1;
}

int main()
{
	int n = 1;

	for (int k = 1; k <= n; k++)
	{
        int  len, len_a, len_b, len_d;
		int t = 0;
        int tt = 0;
        char x[300], y[300];
		int a[1010] = {0};
        int b[1010] = {0};
        int c[1010] = {0};
        int d[1010] = {0};

		scanf("%s", x);
		scanf("%s", y);

		for (int i = strlen(x) - 1; i >= 0; i--)
			a[++t] = (int)(x[i] - 48);
		for (int i = strlen(y) - 1; i >= 0; i--)
			b[++tt] = (int)(y[i] - 48);

		if (t == 1 && a[1] == 0)
		{
			printf("0\n");
			continue;
		}

		len_a = t;
		len_b = tt;
		if (len_a < len_b)
		{
			printf("0\n");
			continue;
		}

		len = len_a - len_b + 1;
		for (int i = len; i > 0; i--)
		{
			memset(d, 0, sizeof(d));
			for (int j = 1; j <= len_b; j++)
            {
                d[j + i - 1] = b[j];
            }
			len_d = len_b + i - 1;
			while (check(a, d, len_a, len_d))
			{
				c[i]++;
				for (int j = 1; j <= len_a; j++)
				{
					if (a[j] < d[j])
					{
						a[j + 1]--;
						a[j] += 10;
					}
					a[j] -= d[j];
				}
				while (len_a > 0 && a[len_a] == 0)
                {
                    len_a--;
                }
			}
		}
		while (len > 1 && c[len] == 0)
        {
            len--;
        }
			
		for (int i = len; i > 0; i--)
        {
            printf("%d", c[i]);
        }
		printf("\n");
	}
	return 0;
}