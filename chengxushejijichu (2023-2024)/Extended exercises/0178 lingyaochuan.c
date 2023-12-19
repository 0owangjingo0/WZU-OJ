#include <stdio.h>

int main(void)
{
    char str[100];

    while (scanf("%s", str) != EOF)
    {
        int max1 = 0; //最长1串
        int max2 = 0; //最长0串

        int temp1 = 0; //临时1串
        int temp2 = 0; //临时0串

        char temp = str[0]; //临时字符

        int i = 0;
        while (str[i] != '\0')
        {
            if (str[i] == temp)
            {
                if (str[i] == '1')
                {
                    temp1++;
                    if (temp1 > max1)
                    {
                        max1 = temp1;
                    }
                }
                else
                {
                    temp2++;
                    if (temp2 > max2)
                    {
                        max2 = temp2;
                    }
                }
            }
            else
            {
                temp = str[i];

                if (str[i] == '1')
                {
                    temp1 = 1;
                    if (temp1 > max1)
                    {
                        max1 = temp1;
                    }
                }
                else
                {
                    temp2 = 1;
                    if (temp2 > max2)
                    {
                        max2 = temp2;
                    }
                }
            }

            i++;
        }

        printf("%d    %d\n", max1, max2);
    }
}