#include <stdio.h>

int yueshu(int a, int b);
int beishu(int a, int b);

int main(void)
{
    int m;
    int a, b;
    
    scanf("%d", &m);
    
    while (m >= 1)
    {
        scanf("%d %d", &a, &b);        
        printf("%d %d\n", yueshu(a, b), beishu(a, b));
        
        m--;
    }

    return 0;
}

int yueshu(int a, int b)
{
    
    do
    {
    if (a > b)
    {
        a = a % b;
    }
    if (a < b)
    {
        b = b % a;
    }
    } while (a * b != 0);

    return (a == 0) ? b : a;
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