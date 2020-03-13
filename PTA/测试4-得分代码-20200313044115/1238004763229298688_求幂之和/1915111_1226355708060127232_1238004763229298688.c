#include<stdio.h>
#include<math.h>
int main(void)
{
    int sum=0,n,i,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=pow(2,i);
        sum+=k;
    }
    printf("result = %d",sum);
    return 0;
}