#include <stdio.h>

int main(void)
{	
	char a;
	
	for(int n=1; n<5; n++)
	{
		a = getchar();
		putchar(a);
		printf("---");
	}
	
	a = getchar();
	putchar(a);
	printf("\n");
	
	return 0;
 } 