#include <stdio.h>
int main()
{
    int n=0;
    int s=0;
        scanf("%d",&n);
        while(n>0)
    {
        if(n%2==1)
        {
            s=s+n;
        }
        scanf("%d",&n);
    }
    printf("%d",s);
    return 0;
}