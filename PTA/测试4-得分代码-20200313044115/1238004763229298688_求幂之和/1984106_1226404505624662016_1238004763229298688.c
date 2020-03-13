#include<stdio.h>
#include<math.h>
int main()
{
    int i,sum,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(2,i);
    }
    printf("result = %d",sum);
    return 0;
}