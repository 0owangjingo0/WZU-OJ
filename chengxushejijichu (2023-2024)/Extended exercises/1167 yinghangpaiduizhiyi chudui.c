#include<stdio.h>
#include<string.h>

int main(void)
{
    char num[1000][20];
    char grade[1000][20];
    int head = 0;
    int tail = 0;

    char in[10] = "IN";
    char quit[10] = "QUIT";
    char list[10] = "LIST";
    char out[10] = "OUT";

    char str[10];

    while (scanf("%s", str) != EOF)
    {
        if (strcmp(str, in) == 0)
        {
            scanf("%s", num[tail]);
            scanf("%s", grade[tail]);
            

            printf(
                "IN:%d %s %s %d\n",
                tail + 1,
                num[tail],
                grade[tail],
                tail - head
                );
            
            tail++;
        }
        else if (strcmp(str, list) == 0)
        {
            printf("LIST:\n");
            for (int i = head; i < tail; i++)
            {
                printf(
                    "%d %s %s\n",
                    i + 1,
                    num[i],
                    grade[i]
                    );
            }
        }
        else if (strcmp(str, out) == 0)
        {
            if (head == tail)
            {
                printf("FAILED:\n");
                continue;
            }
            printf(
                "OUT:%d %s %s\n",
                head + 1,
                num[head],
                grade[head]
                );
            head++;
        }
        else if (strcmp(str, quit) == 0)
        {
            printf("GOOD BYE!\n");
            break;
        }
    }

}