#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[101];
    while (scanf("%s", str) != EOF)
    {
        char word[101] = "";
        char words[101][101] = {""};
        int wordCount = 0;
        for (int i = 0; i < strlen(str); i++)
        {
            if (isalpha(str[i]))
            {
                char temp[2] = {str[i], '\0'};
                strcat(word, temp);
            }
            else if (strlen(word) > 0)
            {
                int found = 0;
                for (int j = 0; j < wordCount; j++)
                {
                    if (strcmp(words[j], word) == 0)
                    {
                        found = 1;
                        break;
                    }
                }
                if (!found)
                {
                    strcpy(words[wordCount++], word);
                    printf("%s\n", word);
                }
                strcpy(word, "");
            }
        }
        if (strlen(word) > 0)
        {
            int found = 0;
            for (int j = 0; j < wordCount; j++)
            {
                if (strcmp(words[j], word) == 0)
                {
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("%s\n", word);
            }
        }
    }
    return 0;
}