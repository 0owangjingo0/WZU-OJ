#include <stdio.h>
#include <string.h>

int str_compare(char str1[], char str2[]);
void upper(char str[], char new_str[]);

int main(void)
{
    char inc[] = "inc";
    char dec[] = "dec";
    char ncinc[] = "ncinc";
    char ncdec[] = "ncdec";
    char string[100][100];
    char upper_string[100][100];
    char str[100];
    int n;


    scanf("%s", str);
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        gets(string[i]);
        upper(string[i], upper_string[i]);
    }

    if (strcmp(str, inc) == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (str_compare(string[j], string[j+1]) > 0)
                {
                    char temp[100];
                    strcpy(temp, string[j]);
                    strcpy(string[j], string[j + 1]);
                    strcpy(string[j + 1], temp);
                }
            }
        }
    }
    else if (strcmp(str, dec) == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (str_compare(string[j], string[j+1]) < 0)
                {
                    char temp[100];
                    strcpy(temp, string[j]);
                    strcpy(string[j], string[j + 1]);
                    strcpy(string[j + 1], temp);
                }
            }
        }
    }
    else if (strcmp(str, ncinc) == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (str_compare(upper_string[j], upper_string[j+1]) > 0)
                {
                    char temp[100];
                    strcpy(temp, string[j]);
                    strcpy(string[j], string[j + 1]);
                    strcpy(string[j + 1], temp);

                    strcpy(temp, upper_string[j]);
                    strcpy(upper_string[j], upper_string[j + 1]);
                    strcpy(upper_string[j + 1], temp);
                }
            }
        }
    }
    else if (strcmp(str, ncdec) == 0)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (str_compare(upper_string[j], upper_string[j+1]) < 0)
                {
                    char temp[100];
                    strcpy(temp, string[j]);
                    strcpy(string[j], string[j + 1]);
                    strcpy(string[j + 1], temp);

                    strcpy(temp, upper_string[j]);
                    strcpy(upper_string[j], upper_string[j + 1]);
                    strcpy(upper_string[j + 1], temp);
                }
            }
        }
    }
    

    for (int i = 0; i < n; i++)
    {
        puts(string[i]);
    }
    return 0;
}

int str_compare(char str1[], char str2[])
{
    int i = 0;
    int j = 0;
    int flag = 0;
    while (str1[i] == ' ')
    {
        i++;
    }
    while (str2[j] == ' ')
    {
        j++;
    }
    while (str1[i] != '\0' && str2[j] != '\0')
    {
        if (str1[i] > str2[j])
        {
            return 1;
        }
        else if (str1[i] < str2[j])
        {
            return -1;
        }
        i++;
        j++;
    }
}

void upper(char str[], char new_str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            new_str[i] = str[i] - 32;
        }
        else
        {
            new_str[i] = str[i];
        }
        i++;
    }
    new_str[i] = '\0';
}