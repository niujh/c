#include<stdio.h>
int main()
{
    int m,n,i,k=0,l=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&n);
        if(n%2!=0)
           k=k+1;
        if(n%2==0||n==0)
           l=l+1;
    }
    printf("%d %d",k,l);
    return 0;
}
