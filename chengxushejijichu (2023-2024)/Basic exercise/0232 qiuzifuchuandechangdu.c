#include <stdio.h>

int main()
{
    int s = 0;
    char ch;

    ch = getchar();

    while (ch != EOF)
    {
        s = 0;
        while (ch != '\n')
        {
            s++;
            ch = getchar();
        }
        printf("%d\n", s);
        ch = getchar();
    }
    

    return 0;
}