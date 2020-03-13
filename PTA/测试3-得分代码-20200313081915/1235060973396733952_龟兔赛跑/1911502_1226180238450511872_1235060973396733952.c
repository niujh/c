#include<stdio.h>
int main()
{
    int T,tortoise,rabbit,n,a,b;
    tortoise=rabbit=n=a=b=0;
    scanf("%d",&T);
    n=T/10;
    for(int i=1;i<=n;i++)
    {
        tortoise=30*i;
        rabbit=90*i-270*a;
        if (tortoise<rabbit)
        {
            i=i+2;
            a=a+1;
            if (i-2==n)
            {
                a=a-1;
                b=T-10*(i-2);
            }
        }
    }
    tortoise=3*T;
    rabbit=9*(T-b)-270*a;
    if (tortoise>=rabbit)
    {
        if (tortoise>rabbit)
        {
            printf("@_@ %d",tortoise);
        }
        else
        {
            printf("-_- %d",rabbit);
        }
    }
    else
    {
        printf("^_^ %d",rabbit);
    }
    return 0;
}