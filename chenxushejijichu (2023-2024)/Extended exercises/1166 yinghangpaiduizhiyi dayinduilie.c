#include<stdio.h>
#include<string.h>

int main(void)
{
    char num[1000][20];
    char grade[1000][20];
    int p = 0;

    char in[10] = "IN";
    char quit[10] = "QUIT";
    char list[10] = "LIST";

    char str[10];

    while (scanf("%s", str) != EOF)
    {
        if (strcmp(str, in) == 0)
        {
            scanf("%s", num[p]);
            scanf("%s", grade[p]);
            

            printf(
                "IN:%d %s %s %d\n",
                p + 1,
                num[p],
                grade[p],
                p
                );
            
            p++;
        }
        else if (strcmp(str, list) == 0)
        {
            printf("LIST:\n");
            for (int i = 0; i < p; i++)
            {
                printf(
                    "%d %s %s %d\n",
                    i + 1,
                    num[i],
                    grade[i],
                    i
                    );
            }
        }
        else if (strcmp(str, quit) == 0)
        {
            printf("GOOD BYE!\n");
            break;
        }
    }

}