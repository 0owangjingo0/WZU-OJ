#include<stdio.h>
#include<string.h>

int main(void)
{
    char num[1000][20];
    char grade[1000][20];
    int p = 0;

    char in[10] = "IN";
    char quit[10] = "QUIT";

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
        else if (strcmp(str, quit) == 0)
        {
            printf("GOOD BYE!\n");
            break;
        }
    }

}