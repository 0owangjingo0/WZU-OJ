#include<stdio.h>
#define N 3000000
short int k[3*N]={0};
int aim[N]={0};
void f()
{
    k[1]= 1;
    int i,j;
    for(i=1;i<N;i++)
        if(k[i])
    {
        k[2*i+1]= 1;
        k[3*i+1]= 1;
    }
    j=0;
    for(i=0;i<N;i++)
    {
        if(k[i])
            aim[j++]=i;
    }

}
int main()
{
    int n;
    f();
    while(~scanf("%d",&n))
    {
        printf("%d\n",aim[n-1]);
    }
    return 0;
}