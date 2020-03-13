#include<stdio.h>

int main()
{
    int x,n,i=1,a=0,b=0;
    scanf("%d",&n);
    for(i;i<=n;i++)
    {scanf("%d",&x);
        if(x%2==0)
        a++;
        else
        b++;
    }
    printf("%d %d",b,a);
    return 0;

    
}