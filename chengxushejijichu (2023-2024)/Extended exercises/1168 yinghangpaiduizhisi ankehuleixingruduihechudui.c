#include <stdio.h>
#include <string.h>

struct QueueNode {
    char id[10];
    int cclass;
    int index;
    int place;
};

int main(void)
{
    struct QueueNode queue[1000];
    int vip[1000];
    int vhead = 0;
    int vtail = 0;
    int ordinary[1000];
    int ohead = 0;
    int otail = 0;

    int count = 0;

    char in[10] = "IN";
    char out[10] = "OUT";
    char lst[10] = "LIST";
    char quit[10] = "QUIT";

    int head = 0;
    int tail = 0;

    char str[10];
    char temp[20];
    scanf("%s", str);

    while (strcmp(str, quit) != 0)
    {
        if (strcmp(str, in) == 0)
        {
            count++;
            queue[tail].index = count;
            scanf("%s%s", queue[tail].id, temp);
            queue[tail].cclass = (strcmp(temp, "VIP") == 0) ? 1 : 0;
            
            if (queue[tail].cclass == 1)
            {
                vip[vtail++] = tail;
                queue[tail].place = vtail - vhead - 1;
            }
            else
            {
                ordinary[otail++] = tail;
                queue[tail].place = (vtail - vhead) + otail - ohead - 1;
            }

            printf("IN:%d %s %s %d\n", count, queue[tail].id, temp, queue[tail].place);
            tail++;
        }
        else if (strcmp(str, out) == 0)
        {
            if (vtail - vhead != 0)
            {
                printf(
                    "OUT:%d %s %s\n",
                    queue[vip[vhead]].index,
                    queue[vip[vhead]].id,
                    (queue[vip[vhead]].cclass == 1) ? "VIP" : "Ordinary"
                    );
                vhead++;
            }
            else if (otail - ohead != 0)
            {
                printf(
                    "OUT:%d %s %s\n",
                    queue[ordinary[ohead]].index,
                    queue[ordinary[ohead]].id,
                    (queue[ordinary[ohead]].cclass == 1) ? "VIP" : "Ordinary"
                    );
                ohead++;
            }
            else
            {
                printf("FAILED:\n");
            
            }
        }
        else if (strcmp(str, lst) == 0)
        {
            printf("LIST:\n");
            int tvhead = vhead;
            int tohead = ohead;

            while (
                vtail - tvhead != 0
                || otail - tohead != 0
            )
            {
                if (vtail - tvhead != 0)
                {
                    printf(
                        "%d %s %s\n",
                        queue[vip[tvhead]].index,
                        queue[vip[tvhead]].id,
                        (queue[vip[tvhead]].cclass == 1) ? "VIP" : "Ordinary"
                        );
                    tvhead++;
                }
                else if (otail - tohead != 0)
                {
                    printf(
                        "%d %s %s\n",
                        queue[ordinary[tohead]].index,
                        queue[ordinary[tohead]].id,
                        (queue[ordinary[tohead]].cclass == 1) ? "VIP" : "Ordinary"
                        );
                    tohead++;
                }
            }
        }
        
        scanf("%s", str);
    }
    printf("GOOD BYE!\n");
}