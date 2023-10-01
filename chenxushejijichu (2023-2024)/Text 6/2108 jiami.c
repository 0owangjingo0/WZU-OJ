#include <stdio.h>
#include <math.h>

int jiami(int ch);
int is_zimu(int ch);

int main()
{
    int n;

    scanf("%d\n", &n);
    
    for (int i=1; i<=n; i++)
    {
        int ch;
        while ((ch=getchar()) != '\n')
        {
            if (is_zimu(ch))
            {
                printf("%d", jiami(ch));
            }
            else
            {
                putchar(ch);
            }
        }
        putchar('\n');
    }

    return 0;
}

int jiami(int ch)
{
    if (
        (ch >= 'a')
        &&
        (ch <= 'z')
    )
    {
        return ch - 'a' + 1;
    }
    else
    {
        return ch - 'A' + 27;
    }
}

int is_zimu(int ch)
{
    if (
        (ch >= 'a' && ch <= 'z')
        ||
        (ch >= 'A' && ch <= 'Z')
    )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}