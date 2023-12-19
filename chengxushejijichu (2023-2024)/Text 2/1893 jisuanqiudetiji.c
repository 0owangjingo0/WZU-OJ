#include <stdio.h>
#define PI 3.1415927

int main(void)
{	
	double a;
	
	scanf("%lf\n", &a);
	printf("%.3lf\n", 4*PI*a*a*a/3);
	
	return 0;
 } 