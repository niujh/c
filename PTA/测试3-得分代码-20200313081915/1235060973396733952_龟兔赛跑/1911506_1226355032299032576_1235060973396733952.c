#include<stdio.h>
int main()
{
    int t,rabbit=0,tortoise=0,i,j,flag=1;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        tortoise+=3;
        if(flag==1)
        {
            rabbit+=9;
            if(i%10==0&&rabbit>tortoise)
            {
                flag=0;
                j=0;
            }
        }
        else
        {
            j++;
            if(j==30)
            flag=1;
        }
    }
    if(rabbit>tortoise)
    printf("^_^ %d\n",rabbit);
    else if(rabbit<tortoise)
    printf("@_@ %d\n",tortoise);
    else printf("-_- %d\n",rabbit);
    return 0;
}