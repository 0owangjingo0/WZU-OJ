#include <stdio.h>

void fun(int n, int * count);

int main(void)
{
	int count;
	int n;
	scanf("%d", &n);
	
	while (n--)
	{
		count = 0;
		int m;
		scanf("%d", &m);
		
		fun(m, &count);
		
		printf("%d\n", count);
	}
	
	return 0;
} 

void fun(int n, int * count)
{
	if (n == 1 || n == 2)
	{
		*count += 1;
		return;
	}
	fun(n - 1, count);
	fun(n - 2, count);
}