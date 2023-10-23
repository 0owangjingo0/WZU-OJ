#include <stdio.h>
#include <string.h>

int main(void)
{
    char num[100][40];
    double score[100];
    int p = 0;

    char insert[] = "INSERT";
    char lst[] = "LIST";
    char quit[] = "QUIT";
    char str[100];

    scanf("%s", str);
    while (strcmp(quit, str) != 0)
    {
        if (strcmp(insert, str) == 0)
        {
            scanf(
                "%s %lf",
                num[p],
                &score[p]
            );

            printf(
                "%s %.2lf\n",
                num[p],
                score[p]
            );
            p++;
        }
        else if (strcmp(lst, str) == 0)
        {
            for (int i = 0; i < p; i++)
            {
                printf(
                    "%s %.2lf\n",
                    num[i],
                    score[i]
                );
            }
        }
        scanf("%s", str);
    }
    printf("Good bye!\n");
    return 0;
}