#include <stdio.h>
int main()
{
    int n,x;
    int i,j=0,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        x=x%2;
        if(x==0)
        {
            j++;
        }
        else {k++;}
    }
    printf("%d %d",k,j);
    return 0;
}
