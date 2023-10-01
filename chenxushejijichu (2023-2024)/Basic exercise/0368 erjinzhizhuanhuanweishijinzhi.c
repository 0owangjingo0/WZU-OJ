#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();

    while (n-- >= 1)
    {
        char ch;
        int s = 0;
        
        while ((ch = getchar()) != '\n')
        {
            int a;
            
            if (ch == '1')
            {
                a = 1;
            }
            else
            {
                a = 0;
            }
            
            s = s * 2 + a;
        }

        printf("%d\n", s);

    }

    return 0;
}