#include <stdio.h>

int main(void)
{
	char lst[100];
	double num;
	double price;
	double money = 0;
	
	while(scanf("%s %lf %lf", lst, &num, &price) != EOF)
	{
		money += num * price;
	}
	
	
	printf("%.1lf\n", money);
	
	return 0;
} 