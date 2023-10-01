#include<stdio.h>
int main()
{
	int a[55] = {1,1,2,3};
	int n;

    scanf("%d", &n);

	while(n != 0)
	{
		int i;
		for(i=3; i <= n; i++)
		a[i] = a[i-1] + a[i-3];
		printf("%d\n", a[n]);

        scanf("%d", &n);
	}
	return 0;
}