#include <stdio.h>

int main(void)
{
    char ch;

    ch = getchar();
    printf("%c%c%c%c\n", ch, ch, ch, ch);
    printf("%c  %c\n", ch, ch);
    printf("%c  %c\n", ch, ch);
    printf("%c%c%c%c\n", ch, ch, ch, ch);

    return 0;
}