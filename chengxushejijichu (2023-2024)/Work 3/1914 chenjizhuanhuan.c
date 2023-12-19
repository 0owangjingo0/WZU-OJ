#include <stdio.h>

int main(void)
{   
    int score;
    char ch;

    scanf("%d", &score);
    if (
        (90 <= score)
        &&
        (score <= 100)
    )
    {
        ch = 'A';
    }
    else if (
        (80 <= score)
        &&
        (score <= 89)
    )
    {
        ch = 'B';
    }
    else if (
        (70 <= score)
        &&
        (score <= 79)
    )
    {
        ch = 'C';
    }
    else if (
        (60 <= score)
        &&
        (score <= 69)
    )
    {
        ch = 'D';
    }
    else if (
       (0 <= score)
        &&
       (score <= 59)
    )
    {
        ch = 'E';
    }
    else
    {
        printf("Score is error!\n");
        goto a;
    }

    printf("%c\n", ch);

    a:return 0;
    return 0;
}