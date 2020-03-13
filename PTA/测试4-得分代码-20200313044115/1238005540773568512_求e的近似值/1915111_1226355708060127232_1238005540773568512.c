#include<stdio.h>
int main(void)
{
    int n,i;
    double sum=0,a=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a*=i;
        sum+=1/a;
    }   
    printf("%.8lf",sum+1);
    return 0;
}