#include<stdio.h>
int main(void)
{
    int N,i,n,a=0,b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&N);
        if(N%2==0)
            a++;
        else
            b++;
    
    }printf("%d %d",b,a);
    return 0;
    
}