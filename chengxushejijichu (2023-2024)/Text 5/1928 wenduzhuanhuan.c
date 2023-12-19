#include <stdio.h>

int main()
{    
    int f, c;
    
    for (f=0; f <= 300; f +=20)
    {
        c = (f-32)*5/9;
        printf("%d    %d\n", f, c);
    }
    
    return 0;
}