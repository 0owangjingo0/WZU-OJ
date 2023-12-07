#include <stdio.h>

struct Number {
    int sign;
    char num[15];
    int len;
};

int Hex_to_Dec(struct Number num)
{
    int ans = 0;
    

    for (int i = 0; i < num.len; i++)
    {
        char temp = num.num[i];
        if (temp >= '0' && temp <= '9')
        {
            ans = ans * 16 + temp - '0';
        }
        else
        {
            ans = ans * 16 + temp - 'A' + 10;
        }
    }

    ans *= num.sign;

    return ans;
}

void Dec_to_Hex(int dec)
{
    if (dec == 0)
    {
        printf("0\n");
        return;
    }
    char ans[15];
    int len = 0;
    if (dec < 0)
    {
        printf("-");
        dec = -dec;
    }
    while (dec != 0)
    {
        int temp = dec % 16;
        if (temp >= 0 && temp <= 9)
        {
            ans[len++] = temp + '0';
        }
        else
        {
            ans[len++] = temp - 10 + 'A';
        }
        dec /= 16;
    }
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", ans[i]);
    }
    printf("\n");
}

int main(void)
{
    char temp1[15];
    char temp2[15];
    while (scanf("%s %s", temp1, temp2) != EOF)
    {
        struct Number num1;
        num1.sign = 1;
        num1.len = 0;
        struct Number num2;
        num2.sign = 1;
        num2.len = 0;

        if (temp1[0] == '-')
        {
            num1.sign = -1;
        }
        
        if (temp1[0] == '-' || temp1[0] == '+')
        {
            for (int i = 1; temp1[i] != '\0'; i++)
            {
                num1.num[num1.len++] = temp1[i];
            }
            num1.num[num1.len] = '\0';
        }
        else
        {
            for (int i = 0; temp1[i] != '\0'; i++)
            {
                num1.num[num1.len++] = temp1[i];
            }
            num1.num[num1.len] = '\0';
        }

        if (temp2[0] == '-')
        {
            num2.sign = -1;
        }
        
        if (temp2[0] == '-' || temp2[0] == '+')
        {
            for (int i = 1; temp2[i] != '\0'; i++)
            {
                num2.num[num2.len++] = temp2[i];
            }
            num2.num[num2.len] = '\0';
        }
        else
        {
            for (int i = 0; temp2[i] != '\0'; i++)
            {
                num2.num[num2.len++] = temp2[i];
            }
            num2.num[num2.len] = '\0';
        }

        int num1_dec = Hex_to_Dec(num1);
        int num2_dec = Hex_to_Dec(num2);
        int sum_dec = num1_dec + num2_dec;  

        Dec_to_Hex(sum_dec);  
    }
    return 0;
}