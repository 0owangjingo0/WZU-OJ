#include <stdio.h>

int main(void)
{   
    char ch;

    scanf("%c", &ch);

    if (
        (ch >= '0')
        &&
        (ch <= '9')
    )
    {
        printf("0\n");
    }
    else if (
        (ch >= 'A' && ch <= 'Z')
        ||
        (ch >= 'a' && ch <= 'z')
    )
    {
        printf("1\n");
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}