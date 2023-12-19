#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //freopen("in1.txt", "r", stdin);
    
    char str[50];
    scanf("%s", str);
    int len = strlen(str) - 1;
    int p = 0;
    getchar();
    
    int ch;
    int t_index = -1;
    int index = -1;
    int count = 0;
    int i = 0;
    int flag = 1;
    int nan1 = 1;
    while ((ch = getchar()) != EOF)
    {
        if (ch != ' ')
        {
            nan1 = 0;
        }
        if (nan1 == 1)
        {
            flag = 1;
        }
        i++;
        if (str[p] == '\0' && ch == ' ' && flag)
        {
            if (index == -1)
            {
                index = t_index;
                
            }
            //printf("%d\n", t_index);
            count++;
        }
        if (ch == ' ')
        {
            p = 0;
            flag = 1;
            continue;
        }

        if (tolower(ch) == tolower(str[p]))
        {
            if (p == 0 && flag)
            {
                t_index = i - 1;
            }
            else if (p == 0 && !flag)
            {
                flag = 0;
                p = -1;
            }
            p++;
        }
        else
        {
            p = 0;
            flag = 0;
        }
    }
    if (count)
    {
        printf("%d %d\n", count, index);
    }
    else
    {
        printf("-1\n");
    }
}