#include <stdio.h>

int main(void)
{	
	int a, b, c, d;
	double s, t;
	
	scanf("%d %d %d", &a, &b, &c);
	d = (a+b)*c;
	t = (double)d;
	s = d/2.0;
	printf("%.2lf\n", s);
	
	return 0;
 } 