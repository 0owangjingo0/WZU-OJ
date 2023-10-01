#include <stdio.h>

int main(void)
{
    int m;
    scanf("%d", &m);
    getchar();

    while (m-- >= 1)
    {
        int flag = 1;
        int n = 1;
        char ch;
        while ((ch=getchar()) != '\n')
        {
            if (
                (n == 1)
                &&
                (ch >= '0' && ch <= '9')
            )
            {
                flag = 0;
            }
            else if (ch == ' ')
            {
                flag = 0;
            }
            else if (
                !(
                (ch >= 'a' && ch <= 'z')
                ||
                (ch >= 'A' && ch <= 'Z')
                ||
                (ch >= '0' && ch <= '9')
                ||
                (ch == '_')
                )
            )
            {
                flag = 0;
            }
            n++;
        }
        (flag) ? printf("yes\n") : printf("no\n");
    }
    return 0;
}