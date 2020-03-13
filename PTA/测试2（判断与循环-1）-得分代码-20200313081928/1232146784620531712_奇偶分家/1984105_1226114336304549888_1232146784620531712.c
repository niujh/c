#include<stdio.h>
int main()
{
    int n,N,i,j=0,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&N);
        if(N%2==0)
        {
            j++;
        }
        else
        {
            m++;
        }
    }
printf("%d %d",m,j);
    return 0;
}
