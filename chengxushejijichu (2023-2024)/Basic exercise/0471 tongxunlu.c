#include <stdio.h>
#include <string.h>

void strlower(char * str);

int main(void)
{
    char name[100][100];
    char number[100][100];
    int p = 0;

    char insert[] = "Insert";
    char quit[] = "Quit";
    char find[] = "Find";
    char del[] = "Delete";
    char str[100];

    scanf("%s", str);
    while (strcmp(quit, str) != 0)
    {
        if (strcmp(insert, str) == 0)
        {
            int flag = 1;
            scanf("%s %s", name[p], number[p]);
            strlower(name[p]);
            for (int i = 0; i < p; i++)
            {   
                if (strcmp(name[p], name[i]) == 0)
                {
                    printf("Already Exist\n");
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                printf("Inserted\n");
                p++;
            }
        }
        else if (strcmp(find, str) == 0)
        {
            char id[100];
            scanf("%s", id);
            strlower(id);

            int flag = 0;
            for (int i = 0; i < p; i++)
            {
                if (strcmp(name[i], id) == 0)
                {
                    printf("%s\n", number[i]);
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                printf("Not Find\n");
            }
        }
        else if (strcmp(del, str) == 0)
        {
            char id[100];
            scanf("%s", id);
            strlower(id);
            int flag = 0;
            int j;
            for (int i = 0; i < p; i++)
            {
                if (strcmp(name[i], id) == 0)
                {
                    j = i;
                    flag = 1;
                }
            }
            if (flag)
            {
                for (int i = j; i < p - 1; i++)
                {
                    strcpy(name[i], name[i+1]);
                    strcpy(number[i], number[i+1]);
                }
                p--;
                printf("Deleted\n");
            }
            else
            {
                printf("Name Not Exist\n");
            }
        }
        scanf("%s", str);
    }
    return 0;
}

void strlower(char * str)
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }
}