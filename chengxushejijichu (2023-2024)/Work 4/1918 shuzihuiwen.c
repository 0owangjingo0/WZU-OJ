#include <stdio.h>

int main(void)
{
    char lst[6];
    scanf("%s", &lst);
    
    if (
        (lst[0] == lst[4])
        &&
        (lst[1] == lst[3])
    )
    {
        printf("Yes.\n");
    }
    else
    {
        printf("No.\n");
    }

    
    return 0;
}