#include <stdio.h>

int main(void)
{
	int w, h;
	
	while (scanf("%d%d", &w, &h) != EOF)
	{
		int i;
		for (i = 0; i < h+2; i++)
		{
			if (i == 0 || i == h+1)
			{
				putchar('+');
				int j;
				for (j = 0; j < w; j++)
				{
					putchar('-');
				}
				putchar('+');
				putchar('\n');
			}
			else
			{
				putchar('|');
				int j;
				for (j = 0; j < w; j++)
				{
					putchar(' ');
				}
				putchar('|');
				putchar('\n');
			}
		}
		
		putchar('\n');
	}
	
	return 0;
} 