#include<stdio.h>
int main()
{
    int i,n;
    double b=1,sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
       b*=i;
       sum+=1.0/b;
    }
    printf("%.8lf",sum+1);
}