
#include <stdio.h>
#include <math.h>

int a[10000001] = {0};
int s()
{
	int i, j, n;
	n = (int)sqrt(10000001) + 1;
	a[1] = 1;
	a[2] = 0;
	for(i = 1;i <= n;i ++)
	{
		if(a[i])
        {
            continue;
        }
        
		for(j = i;j * i < 10000001;j ++)
			a[i * j] = 1;
	}
}

int main()
{
	s();
	int  i, c, x, y;
    scanf("%d %d", &x, &y);
	c = 0;
	for(i = x;i <= y - 5;i ++)
		if(a[i] == 0 && a[i + 6] == 0)
			c += 1;
	printf("%d\n", c);	
	return 0;
}