#include<stdio.h>
int main()
{
    int m,n,i,j,k,s=1;
    scanf("%d %d",m,n);
    for(i=m;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                s+=j;
            }
        }
        if(s==i)
        {
            printf("%d = 1",i");
            for(k=2;k<i;k++)
            {
                if(i%k==0)
                {
                    printf(" + %d",k);
                }
            }
        }
    }
    return 0;
}