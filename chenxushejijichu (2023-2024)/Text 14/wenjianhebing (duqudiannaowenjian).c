#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

int main(void)
{
    FILE *fp1, *fp2, *out;
    char str1[MAX_LEN], str2[MAX_LEN], merged[MAX_LEN * 2];
    int len1, len2, i, j, k;
    int ascii[128] = {0};

    fp1 = fopen("in1.txt", "r");
    fp2 = fopen("in2.txt", "r");
    out = fopen("out.txt", "w");

    if (fp1 == NULL || fp2 == NULL || out == NULL)
    {
        printf("Failed to open file.\n");
        exit(1);
    }

    fgets(str1, MAX_LEN, fp1);
    fgets(str2, MAX_LEN, fp2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    i = j = k = 0;

    for (int i = 0; i < len1; i++)
    {
        ascii[str1[i]]++;
    }
    for (int i = 0; i < len2; i++)
    {
        ascii[str2[i]]++;
    }
    for (int i = 0; i < 128; i++)
    {
        for (int j = 0; j < ascii[i]; j++)
        {
            merged[k++] = i;
        }
    }
    merged[k] = '\0';

    fputs(merged, out);

    fclose(fp1);
    fclose(fp2);
    fclose(out);

    return 0;
}