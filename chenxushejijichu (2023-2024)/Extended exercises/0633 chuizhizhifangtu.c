#include <stdio.h>
#include <ctype.h>

#define MAX_HEIGHT 1000
#define NUM_LETTERS 26

int main()
{
    int counts[NUM_LETTERS] = {0};
    int max_count = 0;
    char c;

    while ((c = getchar()) != EOF)
    {
        if (isalpha(c)) {
            int index = toupper(c) - 'A';
            counts[index]++;
            if (counts[index] > max_count) {
                max_count = counts[index];
            }
        }
    }

    for (int i = max_count; i > 0; i--)
    {
        int last_star_index = 0;
        for (int j = 0; j < NUM_LETTERS; j++)
        {
            if (counts[j] >= i)
            {
                last_star_index = j;
            }
        }
        for (int j = 0; j <= last_star_index; j++)
        {
            if (counts[j] >= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            if (j != last_star_index)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (char c = 'A'; c <= 'Z'; c++)
    {
        printf("%c", c);
        if (c != 'Z')
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}