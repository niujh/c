#include<stdio.h>
int main()
{
    int n,i,j;
    double sum=1.0,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=1;
        for(j=1;j<=i;j++)
        {
            a=a*j;
        }
        a=1.0/a;
        sum=sum+a;
    }
    printf("%.8f",sum);
    return 0;
}
